#include <bits/stdc++.h>
using namespace std;

// squarepatters1

void PrintSquare(int noOfLength)
{
    for (int i = 0; i < noOfLength; i++)
    {
        for (int j = 0; j < noOfLength; j++)
        {
            std::cout << "* ";
        }
        std::cout << endl;
    }
}

// rightAngleTriangle patterns2

void printRightAngleTriangle(int noOfLength){
    for (int i = 0; i < noOfLength; i++)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout<<"# ";
        }
        std::cout << endl;
        
    }
    
}
void printRightAngleTriangleWithNumbers(int lastNum){
    for (int i = 1; i <= lastNum; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << j << " " ;
        }
        std::cout << endl;
    }
    
}
void printRightAngleTriangleWithNumbers2(int lastNum){
    for (int i = 1; i <= lastNum; i++)
    {
       for (int j = 0; j <= i; j++)
       {
        std::cout << i << " ";
       }
       std::cout << endl;
       
    }
    
}
void reverseRightAngleTriangle(int noOfLen){
    for ( int i = 1; i <= noOfLen; i++)
    {
        for (int j = 0; j < noOfLen-i+1; j++)
        {
            std::cout << "# ";
        }
        std::cout << endl;
        
    }
    
}

void reverseRightAngleTriangle2(int noOfLen){
    for ( int i = 1; i <= noOfLen; i++)
    {
        for (int j = 0; j < noOfLen-i+1; j++)
        {
            std::cout << j << " ";
        }
        std::cout << endl;
        
    }
}

void reverseRightAngleTriangle3(int noOfLen){
    for ( int i = 1; i <= noOfLen; i++)
    {
        for (int j = 0; j < noOfLen-i+1; j++)
        {
            std::cout << i << " ";
        }
        std::cout << endl;
         
    }
}

int main()
{

    int n;
    std::cin >> n;
    PrintSquare(n);
    printRightAngleTriangle(n);
    printRightAngleTriangleWithNumbers(n);
    printRightAngleTriangleWithNumbers2(n);
    reverseRightAngleTriangle(n);
    reverseRightAngleTriangle2(n);
    reverseRightAngleTriangle3(n);
}