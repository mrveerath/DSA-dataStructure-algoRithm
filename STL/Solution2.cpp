#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
void reverse(std::vector<int> &v)
{
std::reverse(v.begin(), v.end());
}
int findMax(std::vector<int> &v){
    return *std::max_element(v.begin(), v.end());
}
bool isSortedInAccending(std::vector<int>& arr) {
    return std::is_sorted(arr.begin(), arr.end());
}
void sortInAccending(std::vector<int> &arr)
{
    bool swapped = false;
    do
    {
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > arr[i+1]){
                swap(arr[i],arr[i+1]);
                swapped = true;
            }
        }
    } while (swapped);
    
}
void sortInDescending(std::vector<int>& arr) {
    bool swapped;
    do {
        swapped = false;
        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i] < arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                swapped = true; 
            }
        }
    } while (swapped);
}
void printArr(const std::vector<int>& array) {
    for (auto it = array.begin(); it != array.end(); ++it) {
        std::cout << *it << ",";
    }
    std::cout<<endl;
}
std::vector<int> removeDuplicateFromSorted(std::vector<int>& arr) {
    std::vector<int> arrayOfRemovedDuplicateElement;
    if (arr.empty()) {
        return arrayOfRemovedDuplicateElement;
    }
    int lastElement = arr[0];
    arrayOfRemovedDuplicateElement.push_back(lastElement);
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] != lastElement) {
            arrayOfRemovedDuplicateElement.push_back(arr[i]);
            lastElement = arr[i];
        }
    }
    return arrayOfRemovedDuplicateElement;
}
std::vector<int> mergeSort(std::vector<int> & arr,std::vector<int> & arr2){
    std::vector<int> mergedArr;
    int j,k, = 0;
    int size = arr.size() + arr2.size();
    while(j< arr.size() && k < arr2.size())
    {
       if(arr[j] > arr2[k]){
        mergedArr.push_back(arr2[k])
        k++;
       }
       else{
        mergedArr.push_back(arr[j])
        j++;
       }
    }
    while(j < arr.size()){
        mergedArr.push_back(arr[j]);
        j++;
    }
    while(k < arr.sizes()){
        mergedArr.push_back(arr[j]);
        k++;
    }
    return mergedArr;
    
}
int findKthSmallest(std::vector<int>& arr, int k) {
    std::sort(arr.begin(), arr.end());
    return v[k - 1];
}
int countOccurance(std::vector<int> & arr, int target){
    std::unoredred_map<int, int> umap;
    for(int i = 0; i < arr.size(); i++){
        umap[arr[i]]++;
    }
    return umap[target];
}
bool isVectorPalindrome(std::vector<int> & arr){
    int start = 0;
    int end = arr.size() - 1;
    while(start < end){
        if(arr[start] != arr[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
std::vector<int> split2Half(std::vector<int> & arr){
    int mid = arr.size() / 2;
    std::vector<int> firstHalf(arr.begin(), arr.begin() + mid);
    std::vector<int> secondHalf(arr.begin() + mid, arr.end());
    return {firstHalf, secondHalf};
}
int findSumOfAllElements(std::vector<int> & arr){
    int sum = 0;
    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
    }
    return sum;
}
void insertAtIndex(std::vector<int> & arr, int index, int value){
    arr.insert(arr.begin() + index, value);
}
void removeEvenElement(std::vector<int> & arr){
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % 2 == 0){
            arr.erase(arr.begin() + i);
            i--;
        }
    }
}
int firstGreaterElement(std::vector<int> & arr, int target){
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > target){
            return arr[i];
        }
    }
    return -1;
}
// List Starts From Here

void reverseList(std::list<int> & arr){
    arr.reverse();
}
std::list<int> mergeList(std::list<int> & arr1, std::list<int> & arr2){
    std::list<int> mergedList;
    std::list<int>::iterator it1 = arr1.begin();
    std::list<int>::iterator it2 = arr2.begin();
    while(it1 != arr1.end() && it2 != arr2.end()){
        if(*it1 < *it2){
            mergedList.push_back(*it1);
            it1++;
        }
        else{
            mergedList.push_back(*it2);
            it2++;
        }
    }
    while(it1 != arr1.end()){
        mergedList.push_back(*it1);
        it1++;
    }
    while(it2 != arr2.end()){
        mergedList.push_back(*it2);
        it2++;
    }
    return mergedList;
}
std::list<int> mergeSort(std::list<int> & arr1, std::list<int> & arr2){
    arr1.merge(arr2);
}
std::list<int> removeOccurance(std::list<int> & arr, int target){
    std::list<int>::iterator it = arr.begin();
    while(it != arr.end()){
        if(*it == target){
            it = arr.erase(it);
        }
        else{
            it++;
        }
    }
    return arr;
}
int findMiddleElement(std::list<int> & arr){
    std::list<int>::iterator it = arr.begin();
    std::advance(it, arr.size() / 2);
    return *it;
}

std::list<int> sortDoubleInDecending(std::list<double> & arr){
arr.sort();
}
int main() {
    std::vector<int> v = {1, 4, 15, 2, 1,2,4,3,6,7,65,8,4,6,7,956, 357, 3, 156, 789, 4, 5, 1054, 6787, 6, 12, 7, 8, 9, 10};
    printArr(v);
    sortInDescending(v);
    printArr(v);
    std::vector<int> removedDuplicates = removeDuplicateFromSorted(v);
    printArr(removedDuplicates);
    return 0;
}