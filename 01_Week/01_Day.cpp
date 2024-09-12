//Understading The Data Types 
#include<iostream>
#include<typeinfo>
#include<stdio.h>
#include<cmath>
using namespace std;

//01-Print-Data-Types

void typeCheck(int data){
    std::cout<< sizeof(data) <<"bytes"<<std::endl;
    std::cout<< typeid(data).name() << std::endl;
}

void swap2Numbers(int &number1, int &number2){
    int temp = number1;
    number1 = number2;
    number2 = temp;
}

int sumOfTwoNumbers(int num1,int num2){
    int sum = num1 + num2;
    return sum;
}

int findAsciiValue(char ch){
    int value = ch;
    return value;
}

bool booleanValue(bool bool1,bool bool2){
    std::cout<<"AND Operation Of The Boolean (bool1,bool2) Is " << (bool1 && bool2) <<std::endl;
    std::cout<<"OR Operation Of The Boolean (bool1,bool2) Is " << (bool1 || bool2) <<std::endl;
    std::cout<<"NOT Operation Of The Boolean (bool1) Is " << (!bool1) <<std::endl;
    std::cout<<"NOT Operation Of The Boolean (bool2) Is " << (!bool2) <<std::endl;
    return true;
}

int basicOperation(string operation,int num1,int num2){
    int result = 0;
    if(operation == "add"){
        result = num1 + num2;
    }
    if(operation == "sub"){
        result = num1 - num2;
    }
    if(operation == "mul"){
        result = num1 * num2;
    }
    if(operation == "div"){
        result = num1 / num2;
    }
    return result;
}

double areaOfCircle(int radius){
    double area = 3.14 * radius * radius;
    return area;
}

int floatToInt(float value){
    int values = value;
    return values;
}

char integerToCharacter(int num){
    char ch = num;
    return ch;
}

int powerOfNumber(int num){
    int result = pow(num,num);
    return result;
}

int main(){
    int num1;
    std::cout<<"Enter The Nummber To Get Power Value"<<std::endl;
    std::cin >> num1;
    int result = powerOfNumber(num1);
    std::cout<<"The Power Of Power " << num1 << " Is " << result <<endl;
}
