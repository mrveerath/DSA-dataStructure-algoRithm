#include <iostream>
#include <cmath>

using namespace std;

void anotherApproachToCheckPrime(int number){
    int count = 0;
    for (int i = 1; i <= sqrt(number); i++){
        if(number % i == 0){
            count = count + 1;
            if(number / i != i){
                count = count + 1;
            }
        }
    }
    if(count == 2){
        std::cout << "The Number Is Prime" << endl;
    }
    else{
        std::cout << "The Number Is Not Prime" << endl;
    }
    
}

void GCD(int num1,int num2){
    int greatestCommonDivisor = 1;
    for (int i = 1; i <= std::min(num1,num2); i++)
    {
        if(num1 % i == 0 && num2 % i == 0){
            greatestCommonDivisor = i;
        }
    }
    std::cout << "The GDC Of" << num1 <<" And " << num2 << " Is " <<greatestCommonDivisor;
}

void anotherApproachOfGCD(int num1,int num2){
    int greatestCommonDivisor = 1;
    for (int i = std::min(num1,num2); i > 1; i--)
    {
        if(num1 % i == 0 && num2 % i ==0){
            greatestCommonDivisor = i;
            break;
        }
    }
    std::cout << "The GDC Of " << num1 <<" And " << num2 << " Is " <<greatestCommonDivisor;
    
}

void euclideanGcd(int num1, int num2){
    while(num1 > 0 && num2 > 0 ){
        if(num1 > num2){
            num1 = num1 % num2;
        }
        else{
            num2 = num2 % num1;
        }
    }
    if(num1 == 0){
        std::cout << "The GDC Is " << num2;
    }
    else{
        std::cout << "The GCD Is" << num2;
    }
}

//Recurssion Started

int main(){
    int number1;
    int number2;
    std::cin >> number1;
    std::cin >> number2;
    euclideanGcd(number1,number2);
}