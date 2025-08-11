#include <iostream>
#include <vector>
using namespace std;

class Array
{
private:
    int *elements;
    int length;
    int size;

public:
    // Parameterized Constructor
    Array(int size)
    {
        this->size = size;
        elements = new int[size];
        length = 0;
    }

    // Default Constructor
    Array()
    {
        size = 100;
        elements = new int[size];
        length = 0;
    }

    // Destructor
    ~Array()
    {
        delete[] elements;
    }

    // Utility to add elements
    void addElements(int numbersOfElements)
    {
        if (numbersOfElements > size)
        {
            cout << "Too many elements!" << endl;
            return;
        }
        for (int i = 0; i < numbersOfElements; i++)
        {
            std::cout << "Enter " << i << " Th Number : " << std::endl;
            std::cin >> elements[i];
        }
        length = numbersOfElements;
    }

    // Utility to display elements
    void displayElements()
    {
        for (int i = 0; i < length; i++)
        {
            cout << i << "Th Element Of Array Is : " << elements[i] << std::endl;
        }
        cout << endl;
    }

    // Utility to add element
    void appendElement(int element)
    {
        if (length == size)
        {
            std::cout << "Element Can't Be Appended! Array Is Full" << std::endl;
            return;
        }
        elements[length++] = element;
    }

    // Utility to insert element at specific index
    void insertAt(int element, int index)
    {
        if (index < 0 || index > length || length == size)
        {
            std::cout << "Unable To Insert!";
            return;
        }
        for (int i = length; i > index; i--)
        {
            elements[i] = elements[i - 1];
        }
        elements[index] = element;
        length++;
    }

    // Utility to delete an element from a index
    void deleteAt(int index)
    {
        if (index < 0 || index >= length)
        {
            std::cout << "Unable To Delete!";
            return;
        }
        for (int i = index; i < length - 1; i++)
        {
            elements[i] = elements[i + 1];
        }
        length--;
    }

    // Utility to delete an element
    void deleteElement(int element)
    {
        int elementIndex = this->findIndex(element);
        if (elementIndex == -1)
        {
            std::cout << "The Element Doesn't Exist!";
        }
        else
        {
            this->deleteAt(elementIndex);
        }
    }

    // Utility to find element index
    int findIndex(int element)
    {
        for (int i = 0; i < length; i++)
        {
            if (elements[i] == element)
            {
                return i;
            }
        }
        return -1;
    }

    // Utility to check element exists or not
    bool isExist(int element)
    {
        return findIndex(element) != -1;
    }

    // Utility to get element
    int getElement(int index)
    {
        if (index < 0 || index >= length)
        {
            std::cout << "Unable To Get Element!";
            return -1;
        }
        else
        {
            return elements[index];
        }
    }

    // Utility to set element
    void setElement(int index, int element)
    {
        if (index < 0 || index >= length)
        {
            std::cout << "Unable To Set Element!";
            return;
        }
        else
        {
            elements[index] = element;
        }
    }

    // Utility to count occurance
    int coutnOccurance(int target)
    {
        int occurance = 0;
        for (int i = 0; i < length; i++)
        {
            if (element[i] == target)
            {
                occurance++;
            }
        }
        return occurance;
    }

    // Utility to find index of maximum element
    int findMaxIndex()
    {
        if (length == 0)
        {
            return -1;
        }
        int maxIndex = 0;
        for (int i = 1; i < length; i++)
        {
            if (elements[i] > elements[maxIndex])
            {
                maxIndex = i;
            }
        }
        return maxIndex;
    }

    // Utility to find maximum element
    int findMaxElement()
    {
        if (length == 0)
        {
            return -1;
        }
        else
        {
            return elements[findMaxIndex()];
        }
    }

    // Utility to find index of minimum element
    int findMinIndex()
    {
        if (length == 0)
        {
            return -1;
        }
        int minIndex = 0;
        for (int i = 1; i < length; i++)
        {
            if (elements[i] < elements[minIndex])
            {
                minIndex = i;
            }
        }
        return minIndex;
    }

    // Utility to find minimum element
    int findMinElement()
    {
        if (length == 0)
        {
            return -1;
        }
        else
        {
            return elements[findMinIndex()];
        }
    }

    // Utility to binary element search
    int binarySearch(int element)
    {
        int i = 0, j = length - 1;
        while (i <= j)
        {
            int mid = (i + j) / 2;
            if (elements[mid] == element)
            {
                return mid;
            }
            else if (elements[mid] > element)
            {
                j = mid - 1;
            }
            else
            {
                i = mid + 1;
            }
        }
        return -1;
    }

    // Utility to find total sum
    int totalSum()
    {
        int totalSum = 0;
        for (int i = 0; i < length; i++)
        {
            totalSum += elements[i];
        }
        return totalSum;
    }

    // Utility to find average of all
    double averageOfAll()
    {
        if (length == 0)
            return 0;
        return (double)totalSum() / length;
    }

    // Utility to swap values
    void swap(int &element1, int &element2)
    {
        int temp = element1;
        element1 = element2;
        element2 = temp;
    }

    // Utility to get reverse array
    Array *reversedArray()
    {
        Array *reversedArray = new Array(length);
        for (int i = length - 1; i >= 0; i--)
        {
            reversedArray->appendElement(elements[i]);
        }
        return reversedArray;
    }

    // Utility to reverse array
    void reverse()
    {
        if (length == 0)
        {
            std::cout << "Array Can't Be Reversed";
            return;
        }
        int i = 0, j = length - 1;
        while (i < j)
        {
            this->swap(elements[i], elements[j]);
            i++;
            j--;
        }
    }

    // Utility to reverse from index to index
    void reverseFromIndexToIndex(int firstIndex, int lastIndex)
    {
        if (length == 0)
        {
            std::cout << "Array Can't Be Reversed";
            return;
        }
        while (firstIndex < lastIndex)
        {
            this->swap(elements[firstIndex], elements[lastIndex]);
            firstIndex++;
            lastIndex--;
        }
    }

    // Utility to insert element in sorted
    void insertInSorted(int element)
    {
        if (length == size)
        {
            std::cout << "The Elements Can't Be Inserted!";
            return;
        }
        int indexToInsert = length - 1;
        while (indexToInsert >= 0 && elements[indexToInsert] > element)
        {
            elements[indexToInsert + 1] = elements[indexToInsert];
            indexToInsert--;
        }
        elements[indexToInsert + 1] = element;
        length++;
    }

    // Utility to check is sorted in Ascending Order
    bool isSortedInAscending()
    {
        for (int i = 0; i < length - 1; i++)
        {
            if (elements[i] > elements[i + 1])
            {
                return false;
            }
        }
        return true;
    }

    // Utility to check is sorted in Descending Order
    bool isSortedInDescending()
    {
        for (int i = 0; i < length - 1; i++)
        {
            if (elements[i] < elements[i + 1])
            {
                return false;
            }
        }
        return true;
    }

    // Utility to move negative at front
    void moveNegativeToFirst()
    {
        int first = 0, last = length - 1;
        while (first < last)
        {
            while (elements[first] < 0)
            {
                first++;
            }
            while (elements[last] >= 0)
            {
                last--;
            }
            if (first < last)
            {
                swap(elements[first], elements[last]);
            }
        }
    }

    // Utility to get merged array
    Array *mergedArray(Array &array1)
    {
        Array *mergedArray = new Array(array1.length + length);
        for (int i = 0; i < length; i++)
        {
            mergedArray->appendElement(this->getElement(i));
        }
        for (int i = 0; i < array1.length; i++)
        {
            mergedArray->appendElement(array1.getElement(i));
        }
        return mergedArray;
    }

    // Utility to get union set array
    Array *unionSet(Array &array1)
    {
        Array *unionSet = new Array(length + array1.length);
        int totalLength = 0;
        for (int i = 0; i < length; i++)
        {
            unionSet->appendElement(this->getElement(i));
            totalLength++;
        }
        for (int i = 0; i < array1.length; i++)
        {
            int element = array1.getElement(i);
            if (!unionSet->isExist(element))
            {
                unionSet->appendElement(element);
                totalLength++;
            }
        }
        unionSet->length = totalLength;
        return unionSet;
    }

    // Utility to get intersection set array
    Array *intersectionSet(Array &array1)
    {
        Array *intersectionSet = new Array(length);
        int newLength = 0;
        for (int i = 0; i < length; i++)
        {
            int element = this->getElement(i);
            if (array1.isExist(element))
            {
                intersectionSet->appendElement(element);
                newLength++;
            }
        }
        intersectionSet->length = newLength;
        return intersectionSet;
    }

    // Utility to get difference of set
    Array *differenceSet(Array &array1)
    {
        Array *differenceSet = new Array(length);
        int newIndex = 0;
        for (int i = 0; i < length; i++)
        {
            int element = this->getElement(i);
            if (!array1.isExist(element))
            {
                differenceSet->appendElement(element);
                newIndex++;
            }
        }
        differenceSet->length = newIndex;
        return differenceSet;
    }

    // Utility to sort in ascending
    void sortAscending()
    {
        for (int i = 0; i < length - 1; i++)
        {
            for (int j = i + 1; j < length; j++)
            {
                if (elements[i] > elements[j])
                {
                    swap(elements[i], elements[j]);
                }
            }
        }
    }

    // Utility to sort in descending
    void sortDescending()
    {
        for (int i = 0; i < length - 1; i++)
        {
            for (int j = i + 1; j < length; j++)
            {
                if (elements[i] < elements[j])
                {
                    swap(elements[i], elements[j]);
                }
            }
        }
    }

    // Utility to get nth largest
    int findNthLargest(int n)
    {
        if (n < 1 || n > length)
        {
            cout << "Invalid Nth Position!" << endl;
            return -1;
        }

        sortDescending();
        return elements[n - 1];
    }

    // Utility to get nth smallest
    int findNthSmallest(int n)
    {
        if (n < 1 || n > length)
        {
            cout << "Invalid Nth Position!" << endl;
            return -1;
        }

        sortAscending();
        return elements[n - 1];
    }

    // Utility to count occurrence
    int countOccurrence(int element)
    {
        int totalOccurrence = 0;
        for (int i = 0; i < length; i++)
        {
            if (elements[i] == element)
            {
                totalOccurrence++;
            }
        }
        return totalOccurrence;
    }

    // Utility to check palindrome
    bool isPalindrome()
    {
        int i = 0, j = length - 1;
        while (i <= j)
        {
            if (elements[i] != elements[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    // Utility to find first n largest numbers
    Array *nLargestNumbers(int n)
    {
        if (n <= 0 || n > length)
        {
            return nullptr;
        }
        Array *nLargestNumbers = new Array(n);
        sortDescending();
        for (int i = 0; i < n; i++)
        {
            nLargestNumbers->appendElement(elements[i]);
        }
        return nLargestNumbers;
    }

    // Utility to find first n smaller numbers
    Array *nSmallerNumbers(int n)
    {
        if (n <= 0 || n > length)
        {
            return nullptr;
        }
        Array *nSmallerNumbers = new Array(n);
        sortAscending();
        for (int i = 0; i < n; i++)
        {
            nSmallerNumbers->appendElement(elements[i]);
        }
        return nSmallerNumbers;
    }

    // Utility to rotate left by 1
    void leftRotateBy1()
    {
        if (length <= 1)
        {
            return;
        }
        int temp = elements[0];
        for (int i = 0; i < length - 1; i++)
        {
            elements[i] = elements[i + 1];
        }
        elements[length - 1] = temp;
    }

    // Utility to rotate right by 1
    void rightRotateBy1()
    {
        if (length <= 1)
        {
            return;
        }
        int temp = elements[length - 1];
        for (int i = length - 1; i > 0; i--)
        {
            elements[i] = elements[i - 1];
        }
        elements[0] = temp;
    }

    // Utility to rotate left by k
    void leftRotateByK(int k)
    {
        if (length <= 1 || k <= 0)
        {
            return;
        }

        k = k % length;
        if (k == 0)
        {
            return;
        }

        reverseFromIndexToIndex(0, length - 1);
        reverseFromIndexToIndex(0, length - k - 1);
        reverseFromIndexToIndex(length - k, length - 1);
    }

    // Utility to rotate right by k
    void rightRotateByK(int k)
    {
        if (length <= 1 || k <= 0)
        {
            return;
        }
        k = k % length;
        if (k == 0)
        {
            return; // No rotation needed
        }
        reverseFromIndexToIndex(0, length - 1);
        reverseFromIndexToIndex(0, k - 1);
        reverseFromIndexToIndex(k, length - 1);
    }

    // Utility to find missing elements
    Array *findMissing()
    {

        int largestElements = this->findMaxElement();
        int smallerElements = this->findMinElement();

        int newLength = largestElements - smallerElements;

        Array *missingElements = new Array(newLength);

        for (int i = smallerElements; i < largestElements; i++)
        {
            if (!this->isExist(i))
            {
                missingElements->appendElement(i);
            }
        }

        return missingElements;
    }

    // Utility to move zero at last
    void moveZerosToLast()
    {
        int firstIndex = 0;
        int lastIndex = length - 1;
        while (firstIndex < lastIndex)
        {
            while (elements[firstIndex] != 0)
            {
                firstIndex++;
            }
            while (elements[lastIndex] > 0)
            {
                lastIndex--;
            }
            if (lastIndex > firstIndex)
            {
                swap(elements[lastIndex], elements[firstIndex]);
            }
        }
    }

    // Utility to find last occurance of an elements
    int lastOccurance(int target)
    {
        for (int i = length - 1; i > 0; i--)
        {
            if (elements[i] == target)
            {
                return i;
            }
        }
        return -1;
    }
};
// Utility to find one missing element from an array of one n natural numbers
int findOneMissingElementFromOneToNNaturalNumber(int numbers[], int length)
{
    int n = length + 1;

    int totalSumOfNNaturalNumber = (n * (n + 1)) / 2;

    int totalSumArray = 0;
    for (int i = 0; i < length; i++)
    {
        totalSumArray += numbers[i];
    }

    return totalSumOfNNaturalNumber - totalSumArray;
}

// Utility to find multiple missing elements from an array of  one to n numbers
vector<int> findMissingElementsFromOneToNElementsOfSortedArray(int numbers[], int length)
{
    int maxPossible = numbers[length - 1];
    vector<int> missingElements;
    int countMissing = 0;

    int expected = numbers[0];
    for (int i = 0; i < length; i++)
    {
        while (numbers[i] > expected)
        {
            missingElements.push_back(expected);
            expected++;
        }
        expected++;
    }

    return missingElements;
}

// Utility to check is element exist inside the array or not
bool isExistElement(int target, int numbers[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (numbers[i] == target)
        {
            return true;
        }
    }
    return false;
}

// Utility to find multiple missing elements from an unsorted array from a range
vector<int> findMissingElements(int numbers[], int length)
{
    if (length == 0)
        return {};

    int min = numbers[0];
    int max = numbers[0];

    // Find minimum and maximum elements
    for (int i = 1; i < length; i++)
    {
        if (numbers[i] < min)
            min = numbers[i];
        if (numbers[i] > max)
            max = numbers[i];
    }

    vector<int> missing;

    for (int i = min; i <= max; i++)
    {
        if (!isExistElement(i, numbers, length))
        {
            missing.push_back(i);
        }
    }

    return missing;
}

// Utility to print missing elements using hashMap
void printMissingElements(int numbers[], int length)
{
    if (length == 0)
        return;

    int min = numbers[0];
    int max = numbers[0];

    // Find actual min and max
    for (int i = 1; i < length; i++)
    {
        if (numbers[i] < min)
            min = numbers[i];
        if (numbers[i] > max)
            max = numbers[i];
    }

    map<int, int> elementMap;

    for (int i = 0; i < length; i++)
    {
        elementMap[numbers[i]] = 1;
    }
    for (int i = min; i <= max; i++)
    {
        if (elementMap[i] != 1)
        {
            cout << "Missing Element: " << i << endl;
        }
    }
}

// Utility to find first duplicate from an sorted array
int findIndexOfFirstDuplicate(int numbers[], int length)
{
    for (int i = 1; i < length; i++)
    {
        if (numbers[i] == numbers[i - 1])
        {
            return i;
        }
    }
    return -1;
}
// Utility to find multiple duplicates from an sorted array

void printDuplicates(int numbers[], int lenght)
{
    int lastDuplicates = 0;
    for (int i = 0; i < length; i++)
    {
        if (numbers[i] == numbers[i + 1] && numbers[i] != lastDuplicates)
        {
            std::cout << "The Duplcate Elements Is : " << numbers[i];
            lastDuplicates = numbers[i];
        }
    }
}

// Utility to find all duplicate values in a sorted array
vector<int> findDuplicatesInSorted(int numbers[], int length)
{
    vector<int> duplicates;

    for (int i = 1; i < length; i++)
    {
        if (numbers[i] == numbers[i - 1])
        {
            // Only add once for each group of duplicates
            if (duplicates.empty() || duplicates.back() != numbers[i])
            {
                duplicates.push_back(numbers[i]);
            }
        }
    }

    return duplicates;
}

// Utility to find all duplicate values (including repeated entries) in a sorted array
vector<int> findDuplicatesIncludingRepeatedElements(int numbers[], int length)
{
    vector<int> duplicates;
    for (int i = 1; i < length; i++)
    {
        if (numbers[i] == numbers[i - 1])
        {
            duplicates.push_back(numbers[i]);
        }
    }
    return duplicates;
}

// Utility to find duplicates from an unsorted array
vector<int> findDuplicatesInUnsorted(int numbers[], int length)
{
    vector<int> duplicates;
    for (int i = 0; i < length; i++)
    {
        if (numbers[i] == -1)
            continue;
        for (int j = i + 1; j < length; j++)
        {
            if (numbers[i] == numbers[j] && numbers[i] != -1)
            {
                duplicates.push_back(numbers[j]);
                numbers[j] = -1;
            }
        }
        numbers[i] = -1;
    }
    return duplicates;
}

// Utility to print all the duplicate from an unsrted Array using hashmap
void printDuplicates(int numbers[], int length)
{
    map<int, int> elements;
    for (int i = 0; i < length; i++)
    {
        elements[numbers[i]]++;
    }

    for (auto &pair : elements)
    {
        if (pair.second > 1)
        {
            cout << pair.first << " is a duplicate.\n";
        }
    }
}

int countOccurance

    int
    main()
{
    int sizeOfArray;
    std::cout << "Enter The Size Of Array : ";
    std::cin >> sizeOfArray;
    Array Arr(sizeOfArray);
    int arrayLength;
    std::cout << "Enter The Elements Length To Enter In Array : ";
    std::cin >> arrayLength;
    Arr.addElements(arrayLength);
    Arr.displayElements();
    return 0;
}