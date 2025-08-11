#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <set>

int frequencyCount(int arr[], int size)
{
    std::unordered_map<int, int> umap;
    for (int i = 0; i < size; i++)
    {
        umap[arr[i]]++;
    }
    for (auto it : umap)
    {
        std::cout << it.first << " : " << it.second << "\n";
    }
    return 0;
}

int firstNonRepeatingCharacter(int arr[], int size)
{
    std::unordered_map<int, int> umap;
    for (int i = 0; i < size; i++)
    {
        umap[arr[i]]++;
    }
    for (int i = 0; i < size; i++)
    {
        if (umap[arr[i]] == 1)
        {
            return i;
        }
    }
    return -1;
}

bool areArraysEqual(int arr1[], int size1, int arr2[], int size2)
{
    // If sizes are different, arrays cannot be equal
    if (size1 != size2)
    {
        return false;
    }

    // Create a hash map to store the frequency of elements in arr1
    std::unordered_map<int, int> frequencyMap;

    // Increment counts for elements in arr1
    for (int i = 0; i < size1; i++)
    {
        frequencyMap[arr1[i]]++;
    }

    // Decrement counts for elements in arr2
    for (int i = 0; i < size2; i++)
    {
        frequencyMap[arr2[i]]--;
    }

    // Check if all counts in the map are zero
    for (const auto &pair : frequencyMap)
    {
        if (pair.second != 0)
        {
            return false;
        }
    }

    return true;
}

void calculateMazorityElements(int arr[], int size)
{
    std::unordered_map<int, int> umap;
    for (int i = 0; i < size; i++)
    {
        umap[arr[i]]++;
    }
    for (auto it : umap)
    {
        if (it.second >= 2)
        {
            std::cout << it.first << " : " << it.second << "\n";
        }
    }
}

void countUniqueElements(const std::vector<int> &arr)
{
    std::set<int> uniqueSet;

    // Insert all elements into the set
    for (int elem : arr)
    {
        uniqueSet.insert(elem);
    }

    // Print the number of unique elements
    std::cout << "Number of unique elements: " << uniqueSet.size() << std::endl;
}

int findPairSum(int arr[], int size, int target)
{
    std::unordered_map<int, int> umap;

    for (int i = 0; i < size; i++)
    {
        int complement = target - arr[i];
        if (umap.find(complement) != umap.end())
        {
            return i;
        }
        umap[arr[i]] = i;
    }
}

int main()
{
    // Define a vector of integers
    std::vector<int> arr = {1, 2, 3, 4, 2, 3, 5, 6, 1};
    int arr[9] = {1, 2, 3, 4, 2, 3, 5, 6, 1};

    // Call the function to count unique elements
    int result[2] = findPairSum(arr, 9, 11);

    // Print the result
    std::cout << arr[result[0]] << " " << arr[result[1]] << std::endl;

    return 0;
}