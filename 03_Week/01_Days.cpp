#include <iostream>
#include <stdio.h>
using namespace std;
// 1.	Find the largest element in an array
int largestElement(int arr[], int size)
{
    int largest;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}
// 2.	Find the smallest element in an array.
int smallestElement(int arr[], int size)
{
    int smallest;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    return smallest;
}
// 3.	Reverse an array.
int reverseArray(int arr[],int size){
    int temp;
    for(int i=0;i<size/2;i++){
        temp=arr[i];
        arr[i] = arr[size - i -1];
        arr[size - i -1] = temp;
    }
    return 0;
}
int function1(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size_of_array = 5;
    for (int i = 0; i < size_of_array; i++)
    {
       std::cout<<i<<" Normal Element Of Array "<<arr[i]<<std::endl;
    }
    int largestValue = reverseArray(arr, size_of_array);
    for (int i = 0; i < size_of_array; i++)
    {
       std::cout<<i<<" Reversed Element Of Array "<<arr[i]<<std::endl;
    }
}
int main()
{
    function1();
    return 0;
}
