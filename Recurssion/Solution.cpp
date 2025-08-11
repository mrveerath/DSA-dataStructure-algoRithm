#include <iostream>
#include <string>
using namespace std;

void printNameNTimes(int times, string name)
{
    if (times == 0)
    {
        return;
    }
    std::cout << name << std::endl;
    printNameNTimes(times - 1, name);
}

void print1ToN(int start,int end){
    if (start > end)
    {
        return;
    }
    std::cout<<start<<std::endl;
    print1ToN(start + 1,end);
}

void printNTo1(int end){
    if (end <= 1)
    {
        return;
    }
    std::cout<<end<<std::endl;
    printNTo1(end-1);  
}

int sumOfNNaturalNumber(int num){
    if (num <= 0)
    {
        return 0;
    }
    return num + sumOfNNaturalNumber(num-1);
}

int factorial(int num){
    if (num == 0 || num == 1)
    {
     return 1;
    }
    return num * factorial(num -1);
}

int nthFibonacci(int num){
    if (num == 0 || num == 1)
    {
        return num;
    }
    return nthFibonacci(num - 1) + nthFibonacci(num - 2);
}

int sumOfDigits(int num){
    if (num == 0)
    {
        return 0;
    }
    return num%10 + sumOfDigits(num/10);
}

int reversString(string str){
    if (str.length() == 0)
    {
        return 0;
    }
    return str.back() + reversString(str.substr(0,str.length()-1));
}

bool isPalindrome(string str){
    if (str.length() <= 1)
    {
        return true;
    }
    if (str[0] != str[str.length()-1])
    {
        return false;
    }
    return isPalindrome(str.substr(1,str.length()-2));
}

int productOfDigits(int num){
    if (num < 10)
    {
        return num;
    }
    return num%10 * productOfDigits(num/10);
}

int aRaisedToB(int a,int b){
    if (b == 0)
    {
        return 1;
    }
    return a * aRaisedToB(a,b-1);
}

int climbNStairs(int n) {
    if (n < 0) {
        return 0; // No way to climb negative stairs
    }
    if (n == 0 || n == 1) {
        return 1; // Base cases
    }
    return climbNStairs(n - 1) + climbNStairs(n - 2);
}

void countDigits(int num){

    string str [10] = {"zero","one","two","three","four","five","six","seven","eight","nine"}; 

    if (num == 0)
    {
        return;
    }
    std::cout<<num%10<<std::endl;
    std::cout<<str[num%10]<<std::endl;
    countDigits(num/10);
}

bool isShortedArray(int arr[],int n){
    if (n== 0 || n == 1)
    {
        return true;
    }
    return arr[0] <= arr[1] && isShortedArray(arr+1,n-1);
}

int sumOfArray(int arr[],int n){
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return arr[0];
    }
    
    return arr[0] + sumOfArray(arr+1,n-1);
}

bool isFound(int arr[],int n,int key){
    if (n == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    return isFound(arr+1,n-1,key);
}

void reverseArray(int arr[], int left, int right){
    if (left > right)
    {
        return;
    }
    swap(arr[left],arr[right]);
    reverseArray(arr,left+1,right-1);
}

bool isPalindrom(string str){
    if (str.length() == 0 || str.length() == 1)
    {
        return true;
    }
    if (str[0] != str[str.length()-1])
    {
        return false;
    }
    return isPalindrom(str.substr(1,str.length()-2));
}

void printArray(int arr[],int n){
    if (n == 0)
    {
        return;
    }
    std::cout<<arr[0]<<" ";
    printArray(arr+1,n-1);
}

int gdc(int a,int b){
    if (b == 0)
    {
        return a;
    }
    return gdc(b,a%b);
}

int convertToBinary(int num){
    if (num == 0)
    {
        return 0;
    }
    return num%2 + 10 * convertToBinary(num/2);
}

int findLastOccurance(int arr[],int n,int key){
    if (n == 0)
    {
        return -1;
    }
    if (arr[0] == key)
    {
        return 0;
    }
    int index = findLastOccurance(arr+1,n-1,key);
    if (index == -1)
    {
        return -1;
    }
    return index + 1;
}

int numOfOccurance(int arr[],int n,int key){
    if (n == 0)
    {
        return 0;
    }
    if (arr[0] == key)
    {
        return 1 + numOfOccurance(arr+1,n-1,key);
    }
    return numOfOccurance(arr+1,n-1,key);
}

int lcm(int a,int b){
    return (a*b)/gdc(a,b);
}

int firstOccurance(int arr[],int n,int key){
    if (n == 0)
    {
        return -1;
    }
    if (arr[0] == key)
    {
        return 0;
    }
    int index = firstOccurance(arr+1,n-1,key);
    if (index == -1)
    {
        return -1;
    }
    return index + 1;
}


int findOneFromGrid(int grid[3][3],int row,int col,int key){
    if (row == 3 || col == 3)
    {
        return 0;
    }
    if (grid[row][col] == key)
    {
        return 1;
    }
    return findOneFromGrid(grid,row,col+1,key) + findOneFromGrid(grid,row+1,col,key);
}


string reverseStrings(string str,int length){
    if (length == 0)
    {
        return "";
    }
    return str[length-1] + reverseStrings(str,length-1);
}

int main()
{
    int size = 9;
    int arr [] = {1,2,3,4,5,6,7,8,9};
    std::cout<<reverseStrings("racecarq",8)<<std::endl;
    return 0;
}