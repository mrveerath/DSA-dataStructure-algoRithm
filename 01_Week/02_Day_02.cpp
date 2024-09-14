#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

int stringToInteger()
{
    string word;
    std::cout << "Enter the number as a string: " << std::endl;
    std::cin >> word;
    try
    {
        int num = std::stoi(word);
        std::cout << "This Is A Number Now: " << num << std::endl;
    }
    catch (const std::invalid_argument &e)
    {
        std::cout << "Invalid input! The string cannot be converted to a number." << std::endl;
    }
    catch (const std::out_of_range &e)
    {
        std::cout << "The number is out of the range of int!" << std::endl;
    }
    return 0;
}

int reverseOrder(int* arr,int size){
    for (int i = size - 1; i >= 0; i--)
    {
        std::cout<<i<<":"<<arr[i]<<std::endl;
    }
    return 0;
}


void claculatingAverage(){
    int number;
    std::cout<<"enter the number of your array"<<std::endl;
    std::cin>>number;
    float sum = 0.0;
    float array[number];
    for (int i = 0; i < number; i++)
    {
        float num;
        std::cout<<i<<".enter the number"<<std::endl;
        std::cin>>num;
        sum = sum + num;
    }
    float average = sum / number;
    std::cout<<"The Average Of "<<number <<" Number Is "<<average;
}



int sumOfArray(int* arr,int length){
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int sumOf2DArrya(int arr[3][3],int rows,int cols){
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    return sum;
    
}


// 1.	Write a program to declare an int variable, assign a value to it, and print it.
int function1(){
    int variable = 40;
    std::cout<<"The Initialized Variable Is"<<variable;
    return 0;
}

// 2.	Write a program to declare a float variable, assign a value, and print it with two decimal precision.
// std::fixed And std::precision(?)
#include<iomanip>  //For precision
float function2(){
    float value = 3.1456879;
    //Fixed With Two Precision
    std::cout<<"The Number "<<value<<" With "<<std::fixed<<std::setprecision(2)<<value<<std::endl;
    return value;
}
// 3.	Declare a char variable to store a letter, input it from the user, and print it.
char function3(){
    char ch;
    std::cout<<"enter the character"<<std::endl;
    std::cin>>ch;
    std::cout<<"The Character You Have Entered Is "<< ch <<std::endl;
    return ch;
}
// 4.	Declare a bool variable and assign it true or false, then print its value.
bool function4(){
    bool boolean = 1;
    std::cout<<"The Value Is "<<boolean<<std::endl;
    return boolean;
}
// 5.	Write a program to input two integers and print their sum, difference, product, and quotient.
int function5(){
    int num1,num2;
    std::cout<<"enter first number"<<std::endl;
    std::cin>>num1;
    std::cout<<"enter second number"<<std::endl;
    std::cin>>num2;
    int add = num1 + num2;
    std::cout<< "The Addition Of The Numbers Is" <<add<<std::endl;
    int sub = num1 - num2;
    std::cout<< "The Substraction Of The Numbers Is" <<sub<<std::endl;
    int mul = num1 * num2;
    std::cout<< "The Multiplication Of The Numbers Is" <<mul<<std::endl;
    int div = num1 /num2;
    std::cout<< "The Division Of The Numbers Is" <<div<<std::endl;
    return 0;
}

// 6.	Write a program that takes two floating-point numbers as input and prints their average.
float function6(){
    float num1,num2;
    std::cout<<"enter first floating number"<<std::endl;
    std::cin>>num1;
    std::cout<<"enter second floating number"<<std::endl;
    std::cin>>num2;
    float avg = (num1 + num2) / 2;
    std::cout<<"The Average Of The Two NUmber Is "<<avg<<std::endl;
    return 0;
}

// 7.	Write a program that converts a floating-point number to an integer using typecasting.
int function7(){
    float number;
    std::cout<<"enter the floating number"<<number<<endl;
    std::cin>>number;
    int num = int(number);
    std::cout<<"The Number After Typecast Is"<<num;
    return 0;
}

// 8.	Write a program to take a character as input and print its ASCII value.
int function8(){
    char ch;
    std::cout<<"enter the character to get ASCII value"<<std::endl;
    std::cin>>ch;
    int asciiVal = ch;
    std::cout<<"the ASCII Val Is " <<asciiVal;
    return 0;
}


// 9.	Write a program to input a number and print whether it is even or odd.
int function9(){
    int num;
    std::cout<<"enter a number to find odd or even"<<std::endl;
    std:: cin>>num;
    if(num % 2 == 0){
        std::cout<<"given number is ever";
    }
    else{
        std::cout<<"given number is odd";
    }
}


int main(){
    function9();
    return 0;
}