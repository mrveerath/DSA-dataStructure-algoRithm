#include <iostream>
#include <stdio.h>
using namespace std;

// 1.	Check if a number is positive, negative, or zero.
void function1()
{
    int number;
    std::cout << "enter a number to know weather its positivi negative or zero" << std::endl;
    std::cin >> number;
    if (number == 0)
    {
        std::cout << "number is zero" << std::endl;
    }
    else if (number < 0)
    {
        std::cout << "number is Negative" << std::endl;
    }
    else
    {
        std::cout << "number is Positive" << std::endl;
    }
}

// 2.	Determine if a given year is a leap year
void function2()
{
    int year;
    std::cout << "enter a year to know weather its leap year or not" << std::endl;
    std::cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        std::cout << "the year is leap" << std::endl;
    }
    else
    {
        std::cout << "the year is not leap" << std::endl;
    }
}

// 3.	Find the largest of three numbers.
void function3()
{
    int num1, num2, num3;
    std::cout << "enter the first number" << std::endl;
    std::cin >> num1;
    std::cout << "enter the second number" << std::endl;
    std::cin >> num2;
    std::cout << "enter the third number" << std::endl;
    std::cin >> num3;
    if (num1 < num2)
    {
        if (num2 < num3)
        {
            std::cout << num3 << " Is greater" << std::endl;
        }
        else
        {
            std::cout << num2 << " Is greater" << std::endl;
        }
    }
    else
    {
        if (num1 < num3)
        {
            std::cout << num3 << " is greater" << std::endl;
        }
        else
        {
            std::cout << num1 << " is greater" << std::endl;
        }
    }
}

// 4.	Check if a number is even or odd.
void function4()
{
    int number;
    std::cout << "enter a number to check odd or even" << std::endl;
    std::cin >> number;
    if (number == 0)
    {
        std::cout << "undefinded" << std::endl;
    }
    if (number % 2 == 0)
    {
        std::cout << "the number is even" << std::endl;
    }
    else
    {
        std::cout << "the number is odd" << std::endl;
    }
}

// 5.	Determine if a number is divisible by both 3 and 5.
void function5()
{
    int number;
    std::cout << "enter a number to check weather a number is divided by 3 or 5" << std::endl;
    std::cin >> number;
    if (number % 3 == 0)
    {
        if (number % 5 == 0)
        {
            std::cout << "The number can be divided by 3 or 5" << std::endl;
        }
        else
        {
            std::cout << "The number can only be divided by 3" << std::endl;
        }
    }
    else
    {
        std::cout << "The number can't be divided by 3 or 5" << std::endl;
    }
}

// 6.	Check if a character is a vowel or consonant.
void function6()
{
    char ch;
    std::cout << "enter a character to find if it is vowel or constant" << std::endl;
    std::cin >> ch;
    char lower = std::tolower(ch);
    if(lower >= 'a' && lower <= 'z'){
        if(lower == 'a' || lower=='e' || lower == 'i' || lower == 'o' || lower == 'u' ){
            std::cout<<"the character is vowel"<<std::endl;
        }
        else{
            std::cout<<"the character is constant"<<std::endl;
        }
    }
    else{
        std::cout<<"the character is undefinded"<<std::endl;
    }

}

int main()
{
    function6();
    return 0;
}