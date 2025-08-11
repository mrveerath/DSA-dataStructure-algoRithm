#include <iostream>
#include <string>

bool isPalindrome(std::string str)
{
    std::string main = str;
    std::string palindrome = std::reverse(str);
    if (main == palindrome)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    bool IsPalinndrome = isPalindrome("Pawan nawaP");
    if (IsPalinndrome)
    {
        std::cout << "Its Palindrome";
    }
    else
    {
        std::cout << "Not Palindrome";
    }
    return 0;
}
