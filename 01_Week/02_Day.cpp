#include <iostream>
#include <string>
#include <cctype>   // For isupper, islower, isdigit

using namespace std;

int calcSimpleInterest(int principal, int time, int rateOfInterest)
{
    int simpleInterest = principal * time * rateOfInterest / 100;
    int totalAmt = simpleInterest + principal;
    std::cout << "The Total Interest Amount Is " << simpleInterest << std::endl;
    std::cout << "The Total Amount With Interest Is " << totalAmt << std::endl;
    return 0;
}

void characterTypeCheck(char ch)
{
    if (isupper(ch))
    {
        std::cout << "The Character Is Uppercase" << std::endl;
    }
    else if (islower(ch))
    {
        std::cout << "The Character Is Lowercase" << std::endl;
    }
    else if (isdigit(ch))
    {
        std::cout << "The Character Is Digit" << std::endl;
    }
    else
    {
        std::cout << "The Character Is Symbol" << std::endl;
    }
}

void stringInputAndOutput()
{
    char ch;
    std::cout << "Enter 'w' for word and 's' for sentence: " << std::endl;
    std::cin >> ch;
    std::cin.ignore();
    if (ch == 'w')
    {
        string word;
        std::cout << "Enter your word: " << std::endl;
        std::cin >> word;
        std::cout << "You Have Entered Word" << std::endl;
        std::cout << "The Word Is: " << word << std::endl;
    }
    else if (ch == 's')
    {
        string sentence;
        std::cout << "Enter your sentence: " << std::endl;
        std::getline(std::cin, sentence);
        std::cout << "You Have Entered Sentence" << std::endl;
        std::cout << "The Sentence Is: " << sentence << std::endl;
    }
    else
    {
        std::cout << "You have entered a wrong option." << std::endl;
    }
}

string concatinateString()
{
    string first, second;
    std::cout << "Enter the first word: " << std::endl;
    std::cin >> first;
    std::cout << "Enter the second word: " << std::endl;
    std::cin >> second;
    string complete = first + second;
    std::cout << "Your complete word is: " << complete << std::endl;
    return complete;
}

int lengthOfString()
{
    string word;
    std::cout << "Enter the word to get length: " << std::endl;
    std::cin >> word;
    std::cout << "The length of the word \"" << word << "\" is " << word.length() << std::endl;
    return 0;
}

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

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    std::cout << array[3] << std::endl;
    return 0;
}
