#include <iostream>
#include <unordered_map>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << ",";
    }
    std::cout << std::endl;
}
int findSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int findAverage(int arr[], int size)
{
    int total = 0;
    double average = 0;
    for (int i = 0; i < size; i++)
    {
        total = total + arr[i];
    };
    average = (total / size);
    return average;
}
void reverseArray(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    };
}
void reverseArray2(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void reverseArray3(int arr[], int size)
{
    int temp[size];
    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[size - 1 - i];
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }
}
int secondLargest(int arr[], int size)
{
    int largest = arr[0];
    int secondLargest = arr[0];
    if (size < 2)
    {
        std::cout << "The Array Has Not Multiple Value" << std::endl;
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else
        {
            if (arr[i] > secondLargest)
            {
                secondLargest = arr[i];
            }
        }
    }
    return secondLargest;
}
int secondSmaller(int arr[], int size)
{
    int smaller = arr[0];
    int secondSmaller = arr[0];
    if (size < 2)
    {
        std::cout << "The Array Has Not Multiple Values" << std::endl;
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smaller)
        {
            secondSmaller = smaller;
            smaller = arr[i];
        }
        else
        {
            if (arr[i] < secondSmaller)
            {
                secondSmaller = arr[i];
            }
        }
    }
    return secondSmaller;
}
void occuranceCount(int arr[], int size)
{
    std::unordered_map<int, int> valueMap;
    for (int i = 0; i < size; i++)
    {
        if (valueMap.find(arr[i]) != valueMap.end())
        {
            valueMap[arr[i]] += 1;
        }
        else
        {
            valueMap[arr[i]] = 1;
        }
    }
    for (auto i = valueMap.begin(); i != valueMap.end(); i++)
    {
        std::cout << "Key: " << i->first << ", Value: " << i->second << std::endl;
    }
}
void oddAndEvenCounter(int arr[], int size)
{
    std::unordered_map<string, int> oddEven;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            oddEven["Even"] += 1;
        }
        else
        {
            oddEven["Odd"] += 1;
        }
    }
    for (auto i = oddEven.begin(); i != oddEven.end(); i++)
    {
        std::cout << "Key: " << i->first << ", Value: " << i->second << std::endl;
    }
}
void oddAndEvenCounter2(int arr[], int size)
{
    int odd = 0, even = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even += 1;
        }
        else
        {
            odd += 1;
        }
    }
    std::cout << "Total Odd Is : " << odd << std::endl;
    std::cout << "Total Even Is : " << even << std::endl;
}
bool checkDescendingSorted(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            return false;
            break;
        }
        else
        {
            return true;
        }
    }
}
bool checkPalindromeArray(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        if (arr[i] == arr[size - 1 - i])
        {
            return true;
        }
    }
    return false;
}
int find3Largest(int arr[], int size)
{
    int largest = arr[0];
    int secondLargest = arr[0];
    int thirdLargest = arr[0];
    if (size < 3)
    {
        std::cout << "The Array Has Not Multiple Values" << std::endl;
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            thirdLargest = secondLargest;
            secondLargest = largest;
            largest = arr[i];
        }
        else
        {
            if (arr[i] > secondLargest)
            {
                thirdLargest = secondLargest;
                secondLargest = arr[i];
            }
            else
            {
                if (arr[i] > thirdLargest)
                {
                    thirdLargest = arr[i];
                }
            }
        }
    }
    int first3Largest[3] = {
        largest, secondLargest, thirdLargest};
    for (int i = 0; i < 3; i++)
    {
        std::cout << first3Largest[i] << " ";
    }
}
int swapAdjacent(int arr[], int size)
{
    for (int i = 0; i < size - 1; i += 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    return 0;
}
void removeDuplicate(int arr[], int size)
{
    std::sort(arr, arr + size);
    int index = 1;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            arr[index++] = arr[i];
        }
    }
    size = index;
    for (int i = 0; i < index - 1; i++)
    {
        std::cout << arr[i] << ", ";
    };
}
void findUnion(int arr1[], int arr2[], int size1, int size2)
{
    std::set<int> unions;
    for (int i = 0; i < size1; i++)
    {
        unions.insert(arr1[i]);
    }
    for (int i = 0; i < size2; i++)
    {
        unions.insert(arr2[i]);
    }
    for (auto i = unions.begin(); i != unions.end(); i++)
    {
        std::cout << *i << " ";
    }
}
void findIntersection(int arr1[], int arr2[], int size1, int size2)
{
    std::set<int> intersections;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                intersections.insert(arr1[i]);
            }
        }
    }
    for (auto i = intersections.begin(); i != intersections.end(); i++)
    {
        std::cout << *i << " ";
    }
}

void leftRotateArrayByOnePlace(std::vector<int> &arr)
{
    int size = arr.size();
    std::reverse(arr.begin(), arr.end());
    std::reverse(arr.begin(), arr.end() - 1);
}

void leftRotateArrayByKPlace(std::vector<int> &arr, int k)
{
    int size = arr.size();
    std::reverse(arr.begin(), arr.end());
    std::reverse(arr.begin(), arr.end() - k);
}

void rightRotateArrayBy1Place(std::vector<int> &arr)
{
    int size = arr.size();
    std::reverse(arr.begin(), arr.end() - 1);
    std::reverse(arr.begin(), arr.end());
}

void rightRotateArrayByKPlace(std::vector<int> &arr, int k)
{
    int size = arr.size();
    std::reverse(arr.begin(), arr.end() - k);
    std::reverse(arr.begin(), arr.end());
}

int findingMissingNumbers(std::vector<int> &arr, int size)
{
    std::sort(arr.begin(), arr.end());
    for (int i = 0; i < size; i++)
    {
        if (i != arr.at(i))
        {
            return i;
        }
    }
}

int totalelementsExists(std::vector<int> &arr, int target)
{
    int totalElement = 0;
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        if (target == arr[i])
        {
            totalElement = totalElement + 1;
        }
    }
    return totalElement;
}

std::vector<int> findDuplicates(std::vector<int> &arr)
{
    std::vector<int> duplicates;
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        int totalExists = totalelementsExists(arr, arr[i]);
        if (totalExists > 1)
        {
            duplicates.push_back(arr[i]);
        }
    }
    return duplicates;
}

std::vector<int> moveZeroToTheLast(std::vector<int> &arr)
{
    int indexToInsert = 0;
    std::vector<int> newArray;
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            newArray.push_back(arr[i]);
            indexToInsert++;
        }
    }
    for (int i = indexToInsert; i < size; i++)
    {
        newArray.push_back(0);
        indexToInsert++;
    }
    return newArray;
}

// Function to find the largest element in an array
int findLargest(int arr[], int size) {
    int largest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

// Function to find the smallest element in an array
int findSmallest(int arr[], int size) {
    int smallest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Function to reverse an array in-place
void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Alternative approach to reverse an array using an extra array
void anotherApproachToReverseAnArray(int arr[], int size) {
    int temp[size];
    for (int i = 0; i < size; i++) {
        temp[i] = arr[size - 1 - i];
    }
    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
}
bool isArraySorted(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

// Function to find the second largest element in an array
int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        std::cout << "Array must have at least two elements!" << std::endl;
        return -1;
    }

    int largest = INT_MIN, secondLargest = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        std::cout << "No second largest element found!" << std::endl;
        return -1;
    }
    return secondLargest;
}

// Function to demonstrate finding the largest and smallest numbers
void testFindLargestAndSmallest() {
    const int arraySize = 10;
    int newArray[arraySize] = {10, 20, 30, 24, 15, 24, 26, 78, 16, 8};

    int smallest = findSmallest(newArray, arraySize);
    int largest = findLargest(newArray, arraySize);

    std::cout << "The Largest Number is: " << largest << std::endl;
    std::cout << "The Smallest Number is: " << smallest << std::endl;
}

// Function to demonstrate array reversal
void testReverseArray() {
    const int arraySize = 10;
    int newArray[arraySize] = {10, 20, 30, 24, 15, 24, 26, 78, 16, 8};

    std::cout << "Original Array: ";
    printArray(newArray, arraySize);

    reverseArray(newArray, arraySize);
    std::cout << "Reversed Array (In-place): ";
    printArray(newArray, arraySize);

    // Reset array and test the alternative approach
    int newArray2[arraySize] = {10, 20, 30, 24, 15, 24, 26, 78, 16, 8};
    anotherApproachToReverseAnArray(newArray2, arraySize);
    std::cout << "Reversed Array (Using Extra Array): ";
    printArray(newArray2, arraySize);
}

// Function to demonstrate sorting check
void testArraySorting() {
    const int arraySize = 10;
    int unsortedArray[arraySize] = {10, 20, 30, 24, 15, 24, 26, 78, 16, 8};
    int sortedArray[arraySize] = {10, 15, 20, 25, 35, 40, 45, 50, 55, 60};

    std::cout << "The First Array is " << (isArraySorted(unsortedArray, arraySize) ? "Sorted" : "Not Sorted") << std::endl;
    std::cout << "The Second Array is " << (isArraySorted(sortedArray, arraySize) ? "Sorted" : "Not Sorted") << std::endl;
}

// Function to demonstrate finding the second largest number
void testFindSecondLargest() {
    const int arraySize = 10;
    int newArray[arraySize] = {10, 20, 30, 24, 15, 24, 26, 78, 16, 8};

    int secondLargest = findSecondLargest(newArray, arraySize);
    std::cout << "The Second Largest Number is: " << secondLargest << std::endl;
}




int main()
{
    const int size = 10;
    int arr5[size] = {};
    std::vector<int> arr1 = {1, 2, 0, 3, 4, 5, 0, 0, 0, 6, 7, 4, 4, 7, 8};
    std::vector<int> movedZeros = findFirstAndLastOccurance(arr1,0);
    int duplicateSize = movedZeros.size();
    for (int i = 0; i < duplicateSize; i++)
    {
        std::cout << movedZeros[i] << std::endl;
    }

    return 0;
};