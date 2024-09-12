#include <iostream>
#include <stdio.h>
using namespace std;

// void halfTrapezoid(int noOfRow)
// {
//     for (int i = 1; i <= 2 * noOfRow + 1; i++)
//     {
//         int stars = i;
//         if (i > noOfRow)
//             stars = 2 * noOfRow - i;
//         for (int j = 1; j <= stars; j++)
//         {
//             std::cout << "*";
//         }
//         std::cout << endl;
//     }
// }

// void binaryRightAngleTriangle(int noOfRow)
// {
//     for (int i = 0; i < noOfRow; i++)
//     {
//         int start = 1;
//         if (i % 2 == 0)
//             start = 1;
//         else
//             start = 0;
//         for (int j = 0; j <= i; j++)
//         {
//             std::cout << start << " ";
//             start = 1 - start;
//         }
//         std::cout << endl;
//     }
// }

// void doubleTriangle(int noOfRow)
// {
//     int space = 2 * (noOfRow - 1);
//     for (int i = 1; i <= noOfRow; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             std::cout << j;
//         }
//         for (int j = 0; j <= space; j++)
//         {
//             std::cout << " ";
//         }
//         for (int j = i; j >= 1; j--)
//         {
//             std::cout << j;
//         }
//         std::cout << std::endl;
//         space -= 2;
//     }
// }

// void doubleTriangle(int noOfRow)
// {
//     int space = 2 * (noOfRow - 1);
//     for (int i = 1; i <= noOfRow; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             std::cout << j;
//         }
//         for (int j = 0; j <= space; j++)
//         {
//             std::cout << " ";
//         }
//         for (int j = i; j >= 1; j--)
//         {
//             std::cout << j;
//         }
//         std::cout << std::endl;
//         space -= 2;
//     }
// }

// void numbersTriangle(int noOfRow){
//     int number = 1;
//     for (int i = 0; i < noOfRow; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             std:cout << number;
//             number = number + 1;
//         }
//         std::cout << endl;
//     }

// }
// void alphabetRightAngleTriangle(int noOfRow){
//     for (int i = 0; i < noOfRow; i++)
//     {
//         for (char ch = 'A'; ch <= 'A' + i; ch++)
//         {
//             std::cout << ch << " ";
//         }
//         std::cout << endl;
//     }

// }

void reverseRightAngleTriangle(int noOfRow)
{
    for (int i = 0; i <= noOfRow; i++)
    {
        for (char ch = 'A'; ch < 'A' + (noOfRow - i + 1); ch++)
        {
            std::cout << ch;
        }
        std::cout << std::endl; // Print newline after each row
    }
}

// void alphabetPrymid(int noOfRow){
//     for (int i = 1; i <= noOfRow; i++){
//         for (int j = 0; j < noOfRow-i; j++){
//             std::cout << " ";
//         }
//         char ch = 'A';
//         int breakPoint = i;
//         for (int j = 1; j <= 2 * i - 1; j++){
//             std::cout << ch;
//             if (j < breakPoint) ch++ ;
//             else ch--;
            
//         }
//         for (int j = 0; j < noOfRow-i; j++){
//             std::cout << " ";
//         }
//         std::cout << std::endl;
//     }
// }



void alphabetPyramid(int noOfRow) {
    for (int i = 1; i <= noOfRow; i++) {
        // Print leading spaces
        for (int j = 0; j < noOfRow - i; j++) {
            std::cout << " ";
        }

        char ch = 'A';
        int breakPoint = i;  // Correct breakpoint calculation

        // Print characters
        for (int j = 1; j <= 2 * i - 1; j++) {
            std::cout << ch;
            if (j < breakPoint) ch++; 
            else ch--;  // Correct this to avoid going out of range of alphabets
        }

        // Print trailing spaces
        for (int j = 0; j < noOfRow - i; j++) {
            std::cout << " ";
        }

        std::cout << std::endl;  // Changed 'endl' to 'std::endl' for consistency
    }
}


int main(){
    int n;
    std::cin >> n;
    alphabetPyramid(n);
}