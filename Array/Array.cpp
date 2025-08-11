#include <iostream>
using namespace std;
#include <unordered_map>
#include <vector>
class Array
{
private:
    int *items;
    int size;
    int length;
    void swap(int &item1, int &item2)
    {
        int temp = item1;
        item1 = item2;
        item2 = temp;
    }

public:
    Array(int sizeOfArray)
    {
        size = sizeOfArray;
        length = 0;
        items = new int[size];
    }

    ~Array()
    {
        delete[] items;
    }

    void inputElement(int numberOfelement)
    {
        if (numberOfelement > size)
        {
            cout << "Too many elements!" << endl;
            return;
        }
        cout << "Enter " << numberOfelement << " elements: ";
        for (int i = 0; i < numberOfelement; i++)
        {
            cin >> items[i];
        }
        length = numberOfelement;
    }

    void displayElement(const string &message = "Array : ")
    {
        cout << message << " " << endl;
        for (int i = 0; i < length; i++)
        {
            cout << items[i] << " , ";
        }
        cout << endl;
    }

    void appendElement(int element)
    {
        if (length == size)
        {
            cout << "The Array Is Full Can't" << endl;
        }
        items[length++] = element;
    }

    void insertAt(int index, int element)
    {
        if (index < 0 || index > length || length == size)
        {
            cout << "Invalid Index Or Array Is Full!" << endl;
            return;
        }
        for (int i = length; i > index; i--)
        {
            items[i] = items[i - 1];
        }
        items[index] = element;
        length++;
    }

    void deleteAt(int index)
    {
        int deleted = this->getElement(index);
        if (index < 0 || index >= length)
        {
            cout << "Invalid Index Or Can't Be Deleted!" << endl;
            return;
        }
        for (int i = index; i < length; i++)
        {
            items[i] = items[i + 1];
        }
        length--;
        cout << "Deleted element: " << deleted << endl;
    }

    int findIndex(int element) const
    {
        for (int i = 0; i < length; i++)
        {
            if (items[i] == element)
            {
                return i;
            }
        }
        return -1;
    }

    bool find(int element) const
    {
        for (int i = 0; i < length; i++)
        {
            if (items[i] == element)
            {
                return true;
            }
        }
        return false;
    }

    int getElement(int index)
    {
        if (index < 0 || index >= length)
        {
            cout << "Index Out Of Bound Can't Be Accesses" << endl;
            return -1;
        }
        else
        {
            return items[index];
        }
    }

    void setElement(int index, int element)
    {
        if (index < 0 || index >= length)
        {
            cout << "Index Out Of Bound Can't Set The Element" << endl;
        }
        else
        {
            items[index] = element;
        }
    }

    int findMaxIndex() const
    {
        if (length == 0)
            return -1;
        int maxIndex = 0;
        for (int i = 1; i < length; i++)
        {
            if (items[i] > items[maxIndex])
            {
                maxIndex = i;
            }
        }
        return maxIndex;
    }

    int findMinIndex() const
    {
        if (length == 0)
            return -1;
        int minIndex = -1;
        for (int i = 0; i < length; i++)
        {
            if (items[i] < minIndex)
            {
                minIndex = i;
            }
        }
        return minIndex;
    }

    int findSum() const
    {
        int totalSum = 0;
        for (int i = 0; i < length; i++)
        {
            totalSum += items[i];
        }
        return totalSum;
    }

    double findAverage() const
    {
        return length == 0 ? 0 : static_cast<double>(findSum()) / length;
    }

    void reverseInPlace()
    {
        int start = 0;
        int end = length - 1;
        while (start < end)
        {
            swap(items[start], items[end]);
            start++;
            end--;
        }
    }

    Array *getReversed()
    {

        Array *newArray = new Array(length);
        for (int i = 0; i < length; i++)
        {
            int element = this->getElement(length - 1 - i);
            newArray->appendElement(element);
        }
        return newArray;
    }

    void insertSorted(int element)
    {
        if (length == size)
        {
            cout << "Array is full!" << endl;
            return;
        }
        int i = length - 1;
        while (i > 0 && items[i] > element)
        {
            items[i + 1] = items[i];
            i--;
        }
        items[i] = element;
        length++;
    }

    bool isSorted()
    {
        for (int i = 0; i < length - 1; i++)
        {
            if (items[i] > items[i + 1])
            {
                return false;
            }
        }
        return true;
    }

    void moveNegativeToFront()
    {
        int i = 0, j = length - 1;
        while (i < j)
        {
            while (items[i] < 0 && i < j)
                i++;
            while (items[j] >= 0 && i < j)
                j--;
            if (i < j)
            {
                swap(items[i], items[j]);
            }
        }
    }

    int operator[](int index) const
    {
        if (index < 0 || index >= length)
        {
            cout << "Index out of bounds" << endl;
            return -1;
        }
        return items[index];
    }

    void merge(Array &a1)
    {
        if (length + a1.length > size)
        {
            cout << "Not enough space to merge arrays!" << endl;
            return;
        }
        for (int i = 0; i < a1.length; i++)
        {
            items[length++] = a1.getElement(i);
        }
    }

    Array *unionSet(Array &a1)
    {
        Array *unionSet = new Array(size + a1.size);

        for (int i = 0; i < length; i++)
        {
            unionSet->appendElement(getElement(i));
        }

        for (int i = 0; i < a1.length; i++)
        {
            int element = a1.getElement(i);
            if (!unionSet->find(element))
            {
                unionSet->appendElement(element);
            }
        }

        return unionSet;
    }

    Array *intersectionSet(Array &a1)
    {
        Array *intersectionSet = new Array(a1.size);
        for (int i = 0; i < a1.length; i++)
        {
            int element = a1.getElement(i);
            if (this->find(element) && !intersectionSet->find(element))
            {
                intersectionSet->appendElement(element);
            }
        }
        return intersectionSet;
    }

    Array *differenceSet(Array &a1)
    {
        Array *differenceSet = new Array(a1.length);
        for (int i = 0; i < a1.length; i++)
        {
            int element = a1.getElement(i);
            if (!this->find(element))
            {
                differenceSet->appendElement(element);
            }
        }
        return differenceSet;
    }
};

int findTotalSum(int arr[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int missingElementFromSequence(int arr[], int length)
{

    //* (n*(n+1))/2

    int totalSumOfN = ((length + 1) * (length + 2)) / 2;
    int sum = findTotalSum(arr, length);
    cout << totalSumOfN << endl;
    cout << sum << endl;

    return totalSumOfN - sum;
}

void findMultipleMissingElementFromSequence(int arr[], int length)
{
    int arr2[100];
    int indexToInsert = 0;
    int diff = arr[0] - 0;

    for (int i = 0; i < length; i++)
    {
        while ((arr[i] - i) > diff)
        {
            arr2[indexToInsert++] = i + diff;
            diff++;
        }
    }

    // Print results
    cout << "Missing elements: ";
    for (int i = 0; i < indexToInsert; i++)
    {
        cout << arr2[i] << " ";
    }
}

void findMultipleMissingFromUnsortedSequence(int arr[], int length)
{
    int maximumNum = arr[0], minimumNum = arr[0];

    // Find min and max
    for (int i = 1; i < length; i++)
    {
        if (arr[i] > maximumNum)
            maximumNum = arr[i];
        if (arr[i] < minimumNum)
            minimumNum = arr[i];
    }

    // Build hash table
    unordered_map<int, bool> hashTable;
    for (int i = 0; i < length; i++)
    {
        hashTable[arr[i]] = true;
    }

    // Collect missing values
    vector<int> missing;
    for (int i = minimumNum; i <= maximumNum; i++)
    {
        if (hashTable.find(i) == hashTable.end())
        {
            missing.push_back(i);
        }
    }

    // Print missing elements
    cout << "Missing elements:\n";
    for (int val : missing)
    {
        cout << val << endl;
    }
}

void findingDuplicatesInSortedArray(int arr[], int length)
{
    vector<int> duplicates;
    int lastDuplicate = -1;

    for (int i = 1; i < length; i++)
    {
        if (arr[i] == arr[i - 1] && arr[i] != lastDuplicate)
        {
            duplicates.push_back(arr[i]);
            lastDuplicate = arr[i];
        }
    }

    // Print duplicates
    cout << "Duplicate elements:\n";
    for (int val : duplicates)
    {
        cout << val << endl;
    }
}

void findingDuplicatesInSortedArray2(int arr[], int length)
{
    unordered_map<int, int> hashTable;

    // Count frequencies
    for (int i = 0; i < length; i++)
    {
        hashTable[arr[i]]++;
    }

    vector<int> duplicates;

    // Check for elements with frequency > 1
    for (auto &entry : hashTable)
    {
        if (entry.second > 1)
        {
            // Add each duplicate the number of extra times it appears
            for (int j = 0; j < entry.second - 1; j++)
            {
                duplicates.push_back(entry.first);
            }
        }
    }

    // Print duplicate elements
    cout << "Duplicate elements:\n";
    for (int val : duplicates)
    {
        cout << val << endl;
    }
}

void twoSum(int arr[], int length, int target)
{
    int arr2[2] = {-1, -1}; // To store the result

    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                arr2[0] = i;
                arr2[1] = j;
                break; // Break inner loop once a pair is found
            }
        }
        if (arr2[0] != -1)
            break; // Exit outer loop too
    }

    // Print result
    cout << "Indices of elements that sum to target:\n";
    for (int i = 0; i < 2; i++)
    {
        cout << i << " : " << arr2[i] << endl;
    }
}

void threeSum(int arr[], int length, int target)
{
    int arr2[3] = {-1, -1, -1}; // To store the result
    bool found = false;

    for (int i = 0; i < length && !found; i++)
    {
        for (int j = i + 1; j < length && !found; j++)
        {
            for (int k = j + 1; k < length; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    arr2[0] = i;
                    arr2[1] = j;
                    arr2[2] = k;
                    found = true;
                    break; // Break innermost loop
                }
            }
        }
    }

    // Print result
    if (found)
    {
        cout << "Indices of elements that sum to target:\n";
        for (int i = 0; i < 3; i++)
        {
            cout << i << " : " << arr2[i] << endl;
        }
    }
    else
    {
        cout << "No triplet found that sums to " << target << endl;
    }
}

void twoSum6(int arr[], int length, int target)
{
    unordered_map<int, int> hashTable;
    for (int i = 0; i < length; i++)
    {
        if (hashTable[target - arr[i]] != 0)
        {
            std::cout << "The Numbers Are" << arr[i] << "And" << target - arr[i] << std::endl;
        }
        hashTable[arr[i]]++;
    }
}

void twoSum4(int arr[], int length, int target)
{
    int i = 0, j = length - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == target)
        {
            std::cout << "The Numbers Are " << arr[i] << " And " << arr[j] << std::endl;
            i++;
            j--;
        }
        else if (arr[i] + arr[j] < target)
            i++;
        else
            j--;
    }
}

int main()
{

    int size = 10;
    int arr[10] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 45};

    twoSum4(arr, size, 10);

    return 0;
}