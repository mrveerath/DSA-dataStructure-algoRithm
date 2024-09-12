#include <iostream>
#include <cmath>
using namespace std;

void lengthOfDigit(int number)
{
    int length = 0;
    while (number > 0)
    {
        length = length + 1;
        number = number / 10;
    }
    std::cout << "Length : " << length << std::endl;
}
void anotherApproachToGetLengthOfDigit(int number)
{
    int length = (int)log10(number) + 1;
    std::cout << length << std::endl;
}
void reversedNumber(int number)
{
    int reverseNumber = 0;
    while (number > 0)
    {
        int lastDigit = number % 10;
        number = number / 10;
        reverseNumber = (reverseNumber * 10) + lastDigit;
    }
    std::cout << reverseNumber;
}
void checkPalindrome(int number)
{
    int originaNumber = number;
    int reverseNumber = 0;
    while (number > 0)
    {
        int lastDigit = number % 10;
        number = number / 10;
        reverseNumber = (reverseNumber * 10) + lastDigit;
    }
    if (reverseNumber == originaNumber)
    {
        std::cout << "Yes This Is A Palindrome" << std::endl;
    }
    else
    {
        std::cout << "The Number Is Not A Palindrome" << std::endl;
    }
}

void checkingArmStrongNumber(int number)
{
    int armStrongValue = number;
    int length = 0;
    int sum = 0;
    int tempVal = number;
    // Counting The length
    while (tempVal > 0)
    {
        tempVal = tempVal / 10;
        length = length + 1;
    }
    // Calculating The Armstrong Number
    tempVal = number;
    while (tempVal > 0)
    {
        int lastDigit = tempVal % 10;
        sum = sum + pow(lastDigit, length);
        tempVal = tempVal / 10;
    }
    if (armStrongValue == sum)
    {
        std::cout << "This Is Arm Strong Number" << endl;
    }
    else
    {
        std::cout << "This Is Not Arm Strong Number" << endl;
    }
}
void checkAllDivider(int number){
    for (int i = 1; i <= number; i++){
        if (number % i == 0){
            std::cout << i << std::endl;
        }
    }
}

void checkIsPrime(int num){
    int count = 0;
    for (int i = 1; i < num; i++)
    {
        if(num % i ==0){
            count = count + 1;
        }
    }
        if(count > 2){
            std::cout << "The Number Is Not A Prime" << endl;
        }
        else{
            std::cout << "The Number Is Prime" << endl;
        }
    
}


int main(){
    int number;
    std::cin >> number;
    checkIsPrime(number);
    return 0;
}