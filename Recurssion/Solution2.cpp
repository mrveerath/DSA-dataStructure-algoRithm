#include <iostream>
#include <string>
using namespace std;

void print1ToN(int n){
    if (n <= 0)
    {
        return;
    }
    print1ToN(n - 1);
    std::cout << n << std::endl;
}

void printNto1(int n){
    if (n <= 0)
    {
        return;
    }
    std::cout << n << std::endl;
    printNto1(n - 1);
}

int sumOfNNumber(int n){
    if (n <= 0)
    {
        return 0;
    }
    return n + sumOfNNumber(n - 1);
}

int factorial(int n){
    if (n <= 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int nThFibonaci(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return nThFibonaci(n - 2) + nThFibonaci(n - 1);
}

bool isPrimeHelper(int n, int i)
{
    if (i * i > n)
    {
        return true;
    }
    if (n % i == 0)
    {
        return false;
    }
    return isPrimeHelper(n, i + 1);
}

bool isPrime(int num)
{
    if (num == 1)
    {
        return true;
    }
    if (num == 2)
    {
        return false;
    }

    return isPrimeHelper(num, 2);
}

int powerOfN(int num,int power){
    if(power <= 0){
        return 1;
    }
    return num * powerOfN(num,power-1);
}

int gcd(int num1,int num2){
    if (num2 == 0)
    {
        return num1;
    }
    return gcd(num2,num1%num2);
}

int lcm(int num1, int num2){
    return (num1 * num2)/gcd(num1,num2);
}

string reverseStrings(string str,int size,int startIndex){
    if (startIndex >= (size/2))
    {
        return str;
    }
    swap(str[startIndex], str[size - startIndex - 1]);

    return reverseStrings(str, size, startIndex + 1);
}

bool isPalindrome(string str){
    if (str.length() <= 1)
    {
        return true;
    }
    if (str[0] != str[str.length()-1])
    {
        return false;
    }
    return isPalindrome(str.substr(1,str.length()-2));
}

int stringLength(string str){
    if (str == "")
    {
        return 0;
    }
    return 1 + stringLength(str.substr(1)); 
}

int findVowels(string str){
    if (str == "")
    {
        return 0;
    }
    if (str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u')
    {
        return 1 + findVowels(str.substr(1));
    }
    return findVowels(str.substr(1));
}

string removeOccurance(string str,char ch){
    if (str == "")
    {
        return "";
    }
    if (str[0] == ch)
    {
        return removeOccurance(str.substr(1),ch);
    }
    return str[0] + removeOccurance(str.substr(1),ch);
}

string replaceOccurance(string str,char ch1,char ch2){
    if (str == "")
    {
        return "";
    }
    if (str[0] == ch1)
    {
        return ch2 + replaceOccurance(str.substr(1),ch1,ch2);
    }
    return str[0] + replaceOccurance(str.substr(1),ch1,ch2);
}

string printSubset(string str){
    if (str == "")
    {
        return "";
    }
    return printSubset(str.substr(1)) + str[0] + printSubset(str.substr(1));
}

void printSubString(string str) {
    for (int i = 0; i < str.length(); i++) {  // i should go to str.length()
        for (int j = i + 1; j <= str.length(); j++) {  // j should start from i+1 and go to str.length()
            std::cout << str.substr(i, j - i) << std::endl;  // j - i is the length of the substring
        }
    }
}

int main() {
    printSubString("racecarq");  // Call the function without cout, because it's void
    return 0;
}