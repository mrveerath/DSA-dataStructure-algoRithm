#include <iostream>
#include <vector>
using namespace std;

void mergeInOne(std::vector<int> arr1, std::vector<int> arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0, j = 0;
    while(i < n1 && j < n2){
        if((arr1[i] == 0 && arr2[j] == 0) || (arr1[i] != 0 && arr2[j] == 0)){
            j++;
        }
        if(arr1[i] == 0 && arr2[j] != 0){
            arr1[i] = arr2[j];
            j++;
        }
        if(arr1[i] > arr2[j]){
            swap(arr1[i], arr2[j]);
            i++;
        }
        if(arr1[i] < arr2[j]){
            swap(arr2[j], arr1[i]);
            j++;
        }
        else{
            i++;
        }
    }

}

void printArray(std::vector<int> arr){
    for (int i = 0; i < arr.size() -1 ; i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<endl;
}


int main(){


    std::vector<int> arr1 = {1,2,3,4,5,0,0,0,0,0,0 };
    std::vector<int> arr2 = {5,6,7,8,9,10 };

mergeInOne(arr1, arr2);
printArray(arr1);


    return 0;
}