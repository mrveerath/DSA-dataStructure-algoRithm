#include <iostream>
#include <stdio.h>
#include <cmath>
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
    if (lower >= 'a' && lower <= 'z')
    {
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
        {
            std::cout << "the character is vowel" << std::endl;
        }
        else
        {
            std::cout << "the character is constant" << std::endl;
        }
    }
    else
    {
        std::cout << "the character is undefinded" << std::endl;
    }
}

// 7.	Calculate the absolute value of a number.

void function7()
{
    float number;
    std::cout << "enter a number to calculate the absolute value" << std::endl;
    std::cin >> number;
    float num = abs(number);
    std::cout << "the absoulute number is " << num << std::endl;
}

// 8.	Check if a number is within a specific range (e.g., 10 to 20).
int function8()
{
    int number;
    std::cout << "enter a number to check does it belongs between 10-20" << std::endl;
    std::cin >> number;
    if (number > 10 && number < 20)
    {
        std::cout << "it belongs between 10-20" << std::endl;
    }
    else
    {
        std::cout << "it Doesn't belongs between 10-20" << std::endl;
    }
    return 0;
}

// 9.	Determine if a number is a prime number.
void function9()
{
    int number;
    std::cout << "enter a number to determine if the number is prime or not" << std::endl;
    std::cin >> number;
    bool isPrime = false;
    if (number <= 1)
    {
        isPrime = true;
    }
    for (int i = 2; i > number; i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
        }
        else
        {
            isPrime = true;
        }
    }
    if (isPrime)
    {
        std::cout << "yes the number is prime" << std::endl;
    }
    else
    {
        std::cout << "yes the number is not prime" << std::endl;
    }
}

// 10.	Find the smallest of two numbers using conditional operators.
void function10()
{
    int num1, num2;
    std::cout << "enter the first number" << std::endl;
    std::cin >> num1;
    std::cout << "enter the second number" << std::endl;
    std::cin >> num2;
    int min = (num1 < num2) ? num1 : num2;
    std::cout << "the minimum number is " << min << std::endl;
}

// 11.	Compute the greatest common divisor (GCD) of two numbers.
void function11()
{
    int num1, num2;
    std::cout << "enter the first number" << std::endl;
    std::cin >> num1;
    std::cout << "enter the second number" << std::endl;
    std::cin >> num2;
    int highest, lowest;
    while (num2 != 0)
    {
        int reminder = num1 % num2;
        num1 = num2;
        num2 = reminder;
    }
    std::cout << "the gcd is " << num1 << std::endl;
}

// 12.	Check if a number is a perfect square.
void function12()
{
    double number;
    double sqnum = 0;
    std::cout << "enter a number to check it is a perfect square or not" << std::endl;
    std::cin >> number;
    sqnum = sqrt(number);
    std::cout << sqnum << std::endl;
    if (sqnum == static_cast<int>(sqnum))
    {
        std::cout << "The number is perfect square" << std::endl;
    }
    else
    {
        std::cout << "The number is not perfect square" << std::endl;
    }
}

// 13.	Find the maximum and minimum of three numbers.
void function13()
{
    int num1, num2, num3;
    std::cout << "enter first number" << std::endl;
    std::cin >> num1;
    std::cout << "enter second number" << std::endl;
    std::cin >> num2;
    std::cout << "enter third number" << std::endl;
    std::cin >> num3;
    int max = num1;
    int min = num1;
    if (num2 > max)
    {
        max = num2;
    }
    if (num3 > max)
    {
        max = num3;
    }
    if (num2 < min)
    {
        min = num2;
    }
    if (num3 < min)
    {
        min = num3;
    }
    std::cout << "the maximum number is " << max << std::endl;
    std::cout << "the minimum number is " << min << std::endl;
}

// 14.	Determine if a given integer is a palindrome.
void function14(){
    int number,originalNum;
    std::cout<<"enter a number to check if a given number is palindrome"<<std::endl;
    std::cin>>number;
    int reversedNum = 0;
    if(number < 0){
        std::cout<<"nagetive number"<<std::endl;
        number = -number;
    }
    originalNum = number;
    while(number > 0){
        int modulus = number % 10;
        reversedNum = reversedNum * 10 + modulus;
        number = number / 10;
    }
    std::cout<<originalNum<<std::endl;
    std::cout<<reversedNum<<std::endl;
    if(reversedNum == originalNum){
        std::cout<<"the number is palindrome"<<std::endl;
    }
    else{
        std::cout<<"the number is Not palindrome"<<std::endl;
    }
}

// 15.	Calculate the factorial of a number using a conditional loop.
void function15(){
    int number;
    int factorial = 1;

    std::cout<<"enter a number to get factorial"<<std::endl;
    std::cin>>number;

    if(number < 0){
        std::cout<<"cannot found the factorial of negative number"<<std::endl;
        return;
    }

    while (number > 0)
    {
        factorial *= number;
        number--;
    }
    std::cout<<"the factorial is "<<factorial<<std::endl;
}

// 16.	Find the sum of digits of a number.
void function16(){
    int number;
    std::cout<<"enter a number to get sum of all the digits"<<std::endl;
    std::cin>>number;
    int sum = 0;
    while(number > 0){
        int modulus = number % 10;
        sum = sum + modulus;
        number = number /10;
    }
    std::cout<<"the sum Of the digits of the numbers is "<<sum<<endl;
}

// 17.	Check if a number is an Armstrong number (e.g., 153 = 1^3 + 5^3 + 3^3).


int main()
{
    function16();
    return 0;
}