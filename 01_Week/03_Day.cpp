#include<iostream>
#include<stdio.h>
#include<cmath>
#include<ctype.h>
using namespace std;

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
    return 0;
}

// 10.	Write a program to input two characters and check if they are the same or different.
void function10(){
    char char1,char2;
    std::cout<<"enter first chatacter"<<std::endl;
    std::cin>>char1;
    std::cout<<"enter second chatacter"<<std::endl;
    std::cin>>char2;
    if(char1 == char2){
        std::cout<<"they are same"<<std::endl;
    }
    else{
        std::cout<<"they are not same"<<std::endl;
    }
}

// 11.	Input an integer and a float, then print their sum as both integer and float.
void function11(){
    int num1;
    float num2;
    std::cout<<"enter real number"<<std::endl;
    std::cin>>num1;
    std::cout<<"enter the float number"<<std::endl;
    std::cin>>num2;
    int add = num1 + num2;
    std::cout<<"integer sum : "<<add<<std::endl;
    float add2 = num1 + num2;
    std::cout<<"float sum id : "<<add2<<std::endl;
}

// 12.	Declare an integer array of size 5, input values from the user, and print them.
int function12(){
    int arr[5];
    for (int i = 0; i < 5; i++){
        int num;
        std::cout<<i<<".enter the number"<<std::endl;
        std::cin>>num;
        arr[i]=num;
    }
    for (int i = 0; i < 5; i++){
        std::cout<<i<<".numElement Of array is "<<arr[i]<<std::endl;
    }
    return 0;
}

// 13.	Write a program that takes a string from the user and prints each character on a new line.
char function13(){
    string word;
    std::cout<<"enter a word"<<std::endl;
    std::cin>>word;
    for(char ch : word){
        std::cout<<ch<<std::endl;
    }
}

// 14.	Declare a string variable, initialize it with a sentence, and print its length.
string function14(){
    string sentence;
    std::cout<<"enter the sentence"<<std::endl;
    std::getline(std::cin,sentence);
    std::cout<<sentence.length()<<std::endl;
    return sentence;
}

// 15.	Write a program to convert a lowercase character to uppercase using typecasting.

char function15(){
    char lower;
    std::cout<<"enter the character"<<std::endl;
    std::cin>>lower;
    char upper = std::toupper(lower);
    std::cout<<lower<<" uppercase is "<<upper;
    return lower;
}

// 16.	Write a program to convert an uppercase character to lowercase using typecasting.

char function16(){
    char upper;
    std::cout<<"enter the character"<<std::endl;
    std::cin>>upper;
    char lower = std::tolower(upper);
    std::cout<<upper<<" lowercase is "<<lower;
    return lower;
}

// 17.	Input two integers and swap their values using a temporary variable.

void function17(){
    int num1,num2;
    std::cout<<"enter first number"<<std::endl;
    std::cin>>num1;
    std::cout<<"enter second number"<<std::endl;
    std::cin>>num2;
    std::cout<<"before swapping the first num is "<<num1<<" and second is "<<num2<<std::endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    std::cout<<"after swapping the first num is "<<num1<<" and second is "<<num2<<std::endl;
}

void function18(){
    int num1,num2;
    std::cout<<"enter first number1"<<std::endl;
    std::cin>>num1;
    std::cout<<"enter second number1"<<std::endl;
    std::cin>>num2;
    std::cout<<"before swapping the first num is "<<num1<<" and second is "<<num2<<std::endl;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num2 - num1;
    std::cout<<"after swapping the first num is "<<num1<<" and second is "<<num2<<std::endl;

}

// 19.	Write a program to check if a character is a vowel or a consonant.
void function19(){
    char ch;
    std::cout<<"enter the character"<<std::endl;
    std::cin>>ch;
    int value = ch;
    if((value >= 65) && (value <= 122)){
        if(value == 65 || value == 69 ||  value == 73 ||  value == 79 ||  value == 85 ||  value == 97 || value == 101 || value == 105 || value == 111 || value == 117){
            std::cout<<"character is vowel"<<std::endl;
        }
        else{
            std::cout<<"character is constant"<<std::endl;
        }
    }
    else{
        std::cout<<"undefined character"<<std::endl;
    }
}
// 20.	Write a program that inputs an integer and a character, then prints them both.
void function20(){
    int integer1;
    char character1;
    std::cout<<"enter an integer value"<<std::endl;
    std::cin>>integer1;
    std::cout<<"enter an character value"<<std::endl;
    std::cin>>character1;
    std::cout<<"the integer value is "<<integer1<<std::endl;
    std::cout<<"the character value is "<<character1<<std::endl;
}


// 21.	Write a program to calculate the area of a rectangle using float or double.
float function21(){
    float height,base;
    std::cout<<"height of triangle ?"<<std::endl;
    std::cin>>height;
    std::cout<<"base of triangle ?"<<std::endl;
    std::cin>>base;
    double area = ((0.5) * height * base);
    std::cout<<"areaof triangle is : "<<area;
    return area;
}

// 22.	Write a program to declare and initialize multiple variables of different types and print them.
void function22(){
    int number = 45.2565;
    float number2 = 45.2564;
    double number3 = 45;
    char character1 = 'p';
    bool boolean = false;
    std::cout<<number<<std::endl;
    std::cout<<number2<<std::endl;
    std::cout<<number3<<std::endl;
    std::cout<<character1<<std::endl;
    std::cout<<boolean<<std::endl;
}
// 23.	Input a float number and print its integer part and fractional part separately.
void function23(){
    float number;
    int numberPart;
    float floatPart;
    std::cout<<"enter the number with floating point"<<std::endl;
    std::cin>>number;
    numberPart = int(number);
    floatPart = number - float(numberPart);
    std::cout<<"the integer part is : "<<numberPart<<std::endl;
    std::cout<<"the floating part is : "<<floatPart<<std::endl;
}

// 24.	Write a program that inputs two numbers and prints their remainder (modulus).
void function24(){
    int number,divider;
    std::cout<<"enter the number"<<std::endl;
    std::cin>>number;
    std::cout<<"enter the divider"<<std::endl;
    std::cin>>divider;
    int modulus = number % divider;
    std::cout<<"the modulus is "<<modulus;
}
// 25.	Write a program to compare two float values using == and != operators.
void function25(){
    float num1,num2;
    std::cout<<"enter first float number"<<std::endl;
    std::cin>>num1;
    std::cout<<"enter second float number"<<std::endl;
    std::cin>>num2;
    if(num1 == num2){
        std::cout<<"both are equal"<<std::endl;
    }
    if(num1 != num2){
        std::cout<<"both are not equal"<<std::endl;
    }
}

// 26.	Write a program to input a string and print it in reverse order.
void function26(){
    string word;
    std::cout<<"enter a word to reverse"<<std::endl;
    std::cin>>word;
    for (int i = word.length() - 1; i >= 0 ; i--)
    {
        std::cout<<word[i]<<endl;
    }
    
}

// 27.	Input a number and print its square and cube.
void function27(){
    int num;
    std::cout<<"enter a number to get square and cube"<<std::endl;
    std::cin>>num;
    int square = num * num;
    int cube = num * num * num;
    std::cout<<"the square is "<<square<<std::endl;
    std::cout<<"the cube is "<<cube<<std::endl;
}

// 28.	Write a program that inputs a boolean value and prints its opposite using the ! operator.
void function28(){
    bool value;
    std::cout<<"enter 0 for false and 1 for true";
    std::cin>>value;
    bool opposite = !value;
    std::cout<<"the opposite is "<<opposite<<std::endl;
}

// 29.	Write a program to input three integers and print the largest among them.
void function29(){
    int num1,num2,num3;
    std::cout<<"enter num1"<<std::endl;
    std::cin>>num1;
    std::cout<<"enter num2"<<std::endl;
    std::cin>>num2;
    std::cout<<"enter num3"<<std::endl;
    std::cin>>num3;

    if(num1 == num2 == num3){
        std::cout<<"every number is equal"<<std::endl;
    }
    else{
        if(num1 > num2){
            if(num2 > num3){
                std::cout<<"greater num is "<<num2<<std::endl;
            }
            else{
                std::cout<<"greater num is "<<num3<<std::endl;
            }
        }
        else{
            if(num1 > num3){
                std::cout<<"greater num is "<<num1<<std::endl;
            }
            else{
                std::cout<<"greater num is "<<num3<<std::endl;
            }
        }
    }
}

// 30.	Write a program to input an integer and print its binary representation.
int function30(){
    int number;
    std::cout<<"enter the number to get binary value"<<std::endl;
    std::cin>>number;
    int sum = 0;
    int power = 1;
    while(number > 0){
        int modulus = number % 2;
        sum = sum + modulus * power;
        power = power * 10;
        number = number / 2;
    }
    std::cout<<"binary Of : "<<number<<" is "<<sum;
    return sum;
}


int main(){
    function30();
    return 0;
}