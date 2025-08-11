#include <string>
#include <stdio.h>
using namespace std;

// 1.	Find the largest element in an array
void find_largest()
{
    int arr[] = {5, 2, 8, 1, 3};
    int largest = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    printf("The largest element in the array is: %d\n", largest);
}
// 2.	Find the smallest element in an array.
void find_smallest()
{
    int arr[] = {5, 2, 8, 1, 3};
    int smallest = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    printf("The smallest element in the array is: %d\n", smallest);
}

// 3.	Reverse an array.
void reverse_array()
{
    int arr[] = {5, 2, 8, 1, 3};
    for (int i = 0; i < 5 / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }
    printf("The reversed array is: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 4.	Rotate an array to the right by k steps.
void rotate_array()
{
    int arr[] = {5, 2, 8, 1, 3};
    int k = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    k = k % n;
    for (int i = 0; i < k; i++)
    {
        int temp = arr[n - 1];
        for (int j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
        printf("After rotation: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}

//5.	Check if an array contains duplicates.
void check_array_duplicates(){
    int arr[] = {5, 2, 8, 1, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool duplicate = false;
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i] == arr[j]){
                duplicate = true;
                break;
            }
        }
        if (duplicate){
            break;
        }
    }
    printf("Array contains duplicates: %s\n", duplicate? "Yes" : "No");
}

int main()
{

    find_largest();
    find_smallest();
    reverse_array();
    rotate_array();
    check_array_duplicates();

    return 0;
}