#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

// 31.	Declare an integer constant using the const keyword and try to modify its value (observe the result).
void function31()
{
    const int Value = 40;
    std::cout << "The value is " << Value << std::endl;
    // Value = 50;
    // It Gives Error Here
}

// 32.	Write a program to declare a double variable, initialize it, and print its size using sizeof.
void function32()
{
    double integer;
    std::cout << "enterthe double value to get size" << std::endl;
    std::cin >> integer;
    std::cout << "the size of the value is " << sizeof(integer) << std::endl;
}

// 33.	Declare an integer array of size 10, initialize it with values, and print the sum of all elements.
int function33()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        int num;
        std::cout << i << "enter The number" << std::endl;
        std::cin >> num;
        arr[i] = num;
    }
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

// 34.	Write a program to declare a character array, input a string, and convert all characters to uppercase.
void function34()
{
    string word;
    std::cout << "enter the word " << std::endl;
    std::cin >> word;
    char letters[word.length()];
    for (int i = 0; i < word.length(); i++)
    {
        letters[i] = toupper(word[i]);
        std::cout << letters[i];
    }
}

// 35.	Input a string and print the number of vowels and consonants in it.
void function35()
{
    string word;
    std::cout << "enter the word to get all the numbers of vowel inside it" << std::endl;
    std::cin >> word;
    int numbersOfvowel = 0;
    for (int i = 0; i < word.length(); i++)
    {
        int num = word[i];
        if (num >= 65 && num <= 122)
        {
            if (num == 65 || num == 69 || num == 73 || num == 79 || num == 85 || num == 97 || num == 101 || num == 105 || num == 111 || num == 117)
            {
                numbersOfvowel = numbersOfvowel + 1;
            }
        }
    }
    std::cout << "total numbers of vowel " << word << " contains is " << numbersOfvowel << std::endl;
}

// 36.	Write a program to declare a multi-dimensional array and print the elements in matrix form.
void function36()
{
    int matrixes[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << matrixes[i][j];
        }
        std::cout << std::endl;
    }
}

// 37.	Input an integer and print its absolute value using the abs() function.
void function37()
{
    int number;
    std::cout << "enter a number" << std::endl;
    std::cin >> number;
    std::cout << "the number is " << abs(number);
}

// 38.	Declare an integer pointer, input a number, and store its address using the pointer.
void function38()
{
    int *num;
    int realNumber;
    std::cout << "enter a number to get a pointer address " << std::endl;
    std::cin >> realNumber;
num:
    realNumber;
    std::cout << "The pointer Address of the number is " << num;
}

// 39.	Write a program to input a float number and round it off to the nearest integer.
void function39()
{
    float number;
    std::cout << "enter a float number to get round off" << std::endl;
    std::cin >> number;
    std::cout << "the round off number is " << int(number) << std::endl;
}

// 40.	Write a program to calculate the compound interest using double for the interest rate.
// compoundInterest = principal +((principal * time * rate) / 100)
int function40()
{
    int principal, time;
    float rate;
    std::cout << "enter the principal" << std::endl;
    std::cin >> principal;
    std::cout << "enter the time" << std::endl;
    std::cin >> time;
    std::cout << "enter the rate" << std::endl;
    std::cin >> rate;
    float simpleInterest = (principal * time * rate) / 100;
    float compoundInterest = principal + simpleInterest;
    std::cout << "the compound interest is " << compoundInterest;
    return 0;
}

// 41.	Write a program to input a hexadecimal number and print its equivalent decimal value.
void function41()
{
    std::string hexValue = "";
    char hex[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int decimalNumber;
    std::cout << "enter a decimal number to get hexadecimal" << std::endl;
    std::cin >> decimalNumber;
    if (decimalNumber == 0)
    {
        hexValue = "0";
    }
    else
    {
        while (decimalNumber > 0)
        {
            int modulus = decimalNumber % 16;
            hexValue = hex[modulus] + hexValue;
            decimalNumber = decimalNumber / 16;
        }
    }
    std::cout << "The hex value of the number is: " << hexValue << std::endl;
}

// 42.	Declare a character array, initialize it with a string, and print the ASCII value of each character.
void function42()
{
    string word;
    std::cout << "enter a word to get The Ascii value of that word" << std::endl;
    std::cin >> word;
    char letters[word.length()];
    for (int i = 0; i < word.length(); i++)
    {
        letters[i] = word[i];
    }
    for (int i = 0; i < word.length(); i++)
    {
        int num = letters[i];
        std::cout << "the ASCII Value of the word " << word[i] << " is : " << num << std::endl;
    }
}

// 43.	Write a program to input a number and print the number of digits in it.
int function43()
{
    int number;
    int count = 0;
    std::cout << "enter a number to get digits" << std::endl;
    std::cin >> number;
    if (number == 0)
    {
        count = 1;
    }
    else
    {
        if (number < 0)
        {
            number = -number;
        }
        while (number > 0)
        {
            number = number / 10;
            count++;
        }
    }
    std::cout << "The digit of the number you have provided is " << count << std::endl;
    return 0;
}

// 44.	Declare a string, input a word, and print whether it is a palindrome or not.
void function44()
{
    string word;
    std::cout << "enter a word to know weather it's palindrome or not" << std::endl;
    std::cin >> word;
    string firstWord = word;
    int length = word.length();
    for (int i = 0; i < length / 2; i++)
    {
        char temp = word[i];
        word[i] = word[length - i - 1];
        word[length - i - 1] = temp;
    }
    if (firstWord == word)
    {
        std::cout << "the word Is palindrome";
    }
    else
    {
        std::cout << "the word is not palindrome";
    }
}

// 45.	Write a program to input a number and print whether it is positive, negative, or zero.
int function45()
{
    int number;
    std::cout << "enter a numbetr to know weather its positive negative or zero" << std::endl;
    std::cin >> number;
    if (number == 0)
    {
        std::cout << "the number is zero" << std::endl;
    }
    if (number < 0)
    {
        std::cout << "the number is Nagetive" << std::endl;
    }
    if (number > 0)
    {
        std::cout << "the number is Positive" << std::endl;
    }
    return 0;
}

// 46.	Input two float numbers and print the larger number using conditional operator (ternary).
int function46()
{
    float num1, num2;
    std::cout << "enter first floating number" << std::endl;
    std::cin >> num1;
    std::cout << "enter second floating number" << std::endl;
    std::cin >> num2;
    int max = (num1 > num2) ? num1 : num2;
    std::cout << "the greater number is " << max << std::endl;
    return 0;
}

// 47.	Write a program to input an integer and check if it is divisible by 5 and 10.
int function47()
{
    int number;
    std::cout << "enter a number to find its divided by 5 or 10" << std::endl;
    std::cin >> number;
    if (number % 5 == 0)
    {
        if (number % 10 == 0)
        {
            std::cout << "the number can be divided by both 5 and 10" << std::endl;
        }
        else
        {
            std::cout << "the number only divided by 5" << std::endl;
        }
    }
    else
    {
        std::cout << "the number cant be divided by 5 or 10" << std::endl;
    }
    return 0;
}

// 48.	Input an integer, float, and char, then print them in a formatted table.
void function48()
{
    float numberf;
    int numberi;
    char character;
    std::cout << "enter a float Number" << std::endl;
    std::cin >> numberf;
    std::cout << "enter a integer Number" << std::endl;
    std::cin >> numberi;
    std::cout << "enter a character" << std::endl;
    std::cin >> character;
    std::cout << std::setw(10) << std::left << "float"
              << std::setw(10) << std::left << "integer"
              << std::setw(10) << std::left << "character" << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << std::setw(10) << std::left << numberf
              << std::setw(10) << std::left << numberi
              << std::setw(10) << std::left << character << std::endl;
}

// 49.	Declare a 2D array of size 3x3, input values, and print the sum of all diagonal elements.
void function49(){
    int array[3][3];
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout<<"enter a number"<<std::endl;
            std::cin>>array[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        sum = sum + array[i][i];
    }
    std::cout<<sum<<std::endl;
}

// 50.	Input a floating-point number and print it in scientific notation format.
void function50(){
    double number = 1234567.89;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Fixed-point notation: " << number << std::endl;
    std::cout << std::scientific; 
    std::cout << "Scientific notation: " << number << std::endl;
}


int main()
{
    function50();
    return 0;
}