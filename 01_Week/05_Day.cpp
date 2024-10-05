#include <iostream>
#include <stdio.h>
#include <regex>
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
void function14()
{
    int number, originalNum;
    std::cout << "enter a number to check if a given number is palindrome" << std::endl;
    std::cin >> number;
    int reversedNum = 0;
    if (number < 0)
    {
        std::cout << "nagetive number" << std::endl;
        number = -number;
    }
    originalNum = number;
    while (number > 0)
    {
        int modulus = number % 10;
        reversedNum = reversedNum * 10 + modulus;
        number = number / 10;
    }
    std::cout << originalNum << std::endl;
    std::cout << reversedNum << std::endl;
    if (reversedNum == originalNum)
    {
        std::cout << "the number is palindrome" << std::endl;
    }
    else
    {
        std::cout << "the number is Not palindrome" << std::endl;
    }
}

// 15.	Calculate the factorial of a number using a conditional loop.
void function15()
{
    int number;
    int factorial = 1;

    std::cout << "enter a number to get factorial" << std::endl;
    std::cin >> number;

    if (number < 0)
    {
        std::cout << "cannot found the factorial of negative number" << std::endl;
        return;
    }

    while (number > 0)
    {
        factorial *= number;
        number--;
    }
    std::cout << "the factorial is " << factorial << std::endl;
}

// 16.	Find the sum of digits of a number.
void function16()
{
    int number;
    std::cout << "enter a number to get sum of all the digits" << std::endl;
    std::cin >> number;
    int sum = 0;
    while (number > 0)
    {
        int modulus = number % 10;
        sum = sum + modulus;
        number = number / 10;
    }
    std::cout << "the sum Of the digits of the numbers is " << sum << endl;
}

// 17.	Check if a number is an Armstrong number (e.g., 153 = 1^3 + 5^3 + 3^3).
void function17()
{
    int number;
    std::cout << "enter a number to check the number is armstrong or not" << std::endl;
    std::cin >> number;
    int originalNum = number;
    int num = number;
    int length = 0;
    int armstrongNum = 0;
    while (number > 0)
    {
        length = length + 1;
        number = number / 10;
    }
    while (num > 0)
    {
        int modulus = number % 10;
        armstrongNum = armstrongNum + pow(modulus, length);
        number = number / 10;
    }
    if (originalNum == armstrongNum)
    {
        std::cout << "the number is armstrong number" << std::endl;
    }
    else
    {
        std::cout << "the number is not armstrong number" << std::endl;
    }
}

// 18.	Determine if a given number is a Fibonacci number.
// Condition 5x^2+4 || 5x^2-4 Is A Perfect Square
// Condition Of Fibonacci f[n] = f[n-1]+f[n-2]

void function18()
{
    int number;
    std::cout << "enter a number to check its fibonacci or not" << std::endl;
    std::cin >> number;
    if (number < 0)
    {
        std::cout << "Nagetive Value Can't Be Considered As Fibonacci Number" << std::endl;
    }
    if (number == 0 || number == 1)
    {
        std::cout << "The Number Is Fibonacci" << std::endl;
    }
    int a = 0, b = 1, fib = a + b;
    while (fib <= number)
    {
        if (fib == number)
        {
        std:
            cout << "The Number Is Fibonacci" << std::endl;
            return;
        }
        a = b;
        b = fib;
        fib = a + b;
    }
    std::cout << "The Number Is Not Fibonacci" << std::endl;
}

// 19.	Find out if a number is a power of 2.
void function19()
{
    int number;
    std::cout << "enter number to check its power of 2 or not" << std::endl;
    std::cin >> number;
    if (number < 0)
    {
        std::cout << "Invalid Number" << std::endl;
    }
    while (number > 1)
    {
        if (number == 2)
        {
            std::cout << "Yes, the number is a power of 2." << std::endl;
        }
        if (number % 2 != 0)
        {
            std::cout << "the number is not a power of 2" << std::endl;
        }
        else
        {
        }
        number = number / 2;
    }
}

// 20.	Determine if a given age qualifies for different age groups (child, teenager, adult).
void function20()
{
    int age;
std:
    cout << "enter your age to check your age group" << std::endl;
    std::cin >> age;
    if (age < 0)
    {
        std::cout << "Nagetive Value Can't Be Considered" << std::endl;
    }
    if (age > 0 && age <= 12)
    {
        std::cout << "Your Age Is : " << age << std::endl;
        std::cout << "So You Are Children" << std::endl;
        return;
    }
    else if (age > 12 && age <= 22)
    {
        std::cout << "Your Age Is : " << age << std::endl;
        std::cout << "So You Are Teenager" << std::endl;
        return;
    }
    else if (age > 22 && age <= 45)
    {
        std::cout << "Your Age Is : " << age << std::endl;
        std::cout << "So You Are Adult" << std::endl;
    }
    else
    {
        std::cout << "Your Age Is : " << age << std::endl;
        std::cout << "So You Are Old" << std::endl;
    }
}

// 21.	Calculate the discount price based on a given purchase amount and discount percentage.
void function21()
{
    int purchaseAmount;
    float discountPercentage;
    int discountPrice;
    std::cout << "Enter The Purchase Amount" << std::endl;
    std::cin >> purchaseAmount;
    std::cout << "Enter The Discount Percentage" << std::endl;
    std::cin >> discountPercentage;
    if (purchaseAmount < 0 || discountPercentage < 0)
    {
        std::cout << "Nagetive Value Can't Be Considered As The Value" << std::endl;
        return;
    }
    int actualPrice = purchaseAmount / (1 - (discountPercentage / 100));
    discountPrice = actualPrice - discountPrice;
    std::cout << "The Discount Price Is " << discountPrice << std::endl;
}

// 22.	Find the number of days in a given month and year.
bool isLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}
void function22()
{
    int year, month;
    std::cout << "Enter The Year" << std::endl;
    std::cin >> year;
    std::cout << "Enter The MOnth" << std::endl;
    std::cin >> month;
    if (year < 0 || month < 0)
    {
        std::cout << "Nagetive Value Can't Be Considered" << std::endl;
    }
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year))
    {
        std::cout << "This Year Is Leap Year So There Are 29 Days " << std::endl;
        return;
    }
    std::cout << "There Are " << daysInMonth[month - 1] << " Days" << std::endl;
}

// 23.	Check if a given string contains only digits.
void function23()
{
    string word;
    std::cout << "Enter String To Check It Contains The Digit Or Not" << std::endl;
    std::cin >> word;
    for (int i = 0; i < word.length(); i++)
    {
        if (isdigit(word[i]))
        {
            std::cout << "This String Contains Digit" << std::endl;
            return;
        }
    }
    std::cout << "This String Doesn't Contains Any Digit" << std::endl;
}

// 24.	Determine if a string is a valid email address.
void function24()
{
    string email;
    std::cout << "Enter Your Email To Validate" << std::endl;
    std::cin >> email;
    regex emailPattern(R"((\w+)(\.{0,1})(\w*)@(\w+)\.(\w+))");
    if (regex_match(email, emailPattern))
    {
        std::cout << "This Is Valid Email" << std::endl;
    }
    else
    {
        std::cout << "This Is Not Valid Email" << std::endl;
    }
}

// 25.	Classify a triangle based on the lengths of its sides (equilateral, isosceles, scalene).
void function25()
{
    double side1, side2, side3;
    std::cout << "Enter The Length Of Side 1" << std::endl;
    std::cin >> side1;
    std::cout << "Enter The Length Of Side 2" << std::endl;
    std::cin >> side2;
    std::cout << "Enter The Length Of Side 3" << std::endl;
    std::cin >> side3;
    if (side1 <= 0 || side2 <= 0 || side3 <= 0)
    {
        std::cout << "Nagetive Value Can't Be Considered As The Length" << std::endl;
        return;
    }
    if ((side1 + side2 <= side3) || (side1 + side3 <= side2) || (side2 + side3 <= side1))
    {
        std::cout << "The lengths do not form a valid triangle" << std::endl;
        return;
    }
    if (side1 == side2 && side1 == side3)
    {
        std::cout << "This Is Equilateral Triangle" << std::endl;
        return;
    }
    if ((side1 == side2) || (side2 == side3) || (side1 == side3))
    {
        std::cout << "This Is Isoscale Triangle" << std::endl;
        return;
    }
    else
    {
        std::cout << "This Is Scalene Triangle" << std::endl;
        return;
    }
}

// 26.	Check if a number is a perfect number (e.g., 6 = 1 + 2 + 3).
void function26()
{
    int number;
    std::cout << "Enter A Number To Check If Its Prefect Number Or Not" << std::endl;
    std::cin >> number;
    int sumOfDivider = 0;
    if (number <= 0)
    {
        std::cout << "Nagetive Value Can't Be Considered" << std::endl;
    }
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sumOfDivider = sumOfDivider + i;
        }
    }
    if (sumOfDivider == number)
    {
        std::cout << "The Number Is Perfect Divider" << std::endl;
        return;
    }
    else
    {
        std::cout << "The Number Is Not Perfect Number" << std::endl;
    }
}

// 27.	Find the largest prime number less than a given number.
bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
void function27()
{
    int number;
    std::cout << "Enter Number To Get Prime Number Less Than The Number" << std::endl;
    std::cin >> number;
    int primeNumber = 1;
    if (number <= 0)
    {
        std::cout << "Nagetive Value Can't Be Considered" << std::endl;
        return;
    }
    if (number == 1)
    {
        std::cout << "The Value Is" << number << std::endl;
        return;
    }
    for (int i = number; i > 0; i--)
    {
        if (isPrime(i))
        {
            std::cout << i << std::endl;
            return;
        }
    }
}

// 28.	Convert a temperature from Celsius to Fahrenheit or vice versa based on user input.
void function28()
{
    char ch;
    float value, lastValue;
    std::cout << "Select F For To Farhenheit And C For To Celsius" << std::endl;
    std::cin >> ch;
    ch = tolower(ch);
    if (ch == 'f')
    {
        std::cout << "Enter Celsius Value To Get Into Farhenheit" << std::endl;
        std::cin >> value;
        lastValue = value * (9.0 / 5.0) + 32;
        std::cout << lastValue << " Degree Farhenheit" << std::endl;
        return;
    }
    else if (ch == 'c')
    {
        std::cout << "Enter Farhenheit Value To Get Into Celsius" << std::endl;
        std::cin >> value;
        lastValue = value - 32 * (5.0 / 9.0);
        std::cout << lastValue << " Degree Celsius" << std::endl;
        return;
    }
    else
    {
        std::cout << "Invalid Option" << std::endl;
        return;
    }
}

// 29.	Check if a given date is valid (e.g., 30th February is invalid).
void function29()
{
    int year, month, day;
    std::cout << "enter year" << std::endl;
    std::cin >> year;
    std::cout << "enter month" << std::endl;
    std::cin >> month;
    std::cout << "enter day" << std::endl;
    std::cin >> day;
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year))
    {
        daysInMonth[1] = 29;
    }
    else
    {
        daysInMonth[1] = 28;
    }
    if ((year > 2024) || (month > 12) || (day > daysInMonth[month - 1]))
    {
        std::cout << "Invalid Date" << std::endl;
        return;
    }
    else
    {
        std::cout << "Valid Date";
        return;
    }
}

// 30.	Find the position of the first vowel in a string.
bool isVowel(char character)
{
    character = tolower(character);
    if ((character == 'a') || (character == 'b') || (character == 'i') || (character == 'o') || (character == 'u'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void function30()
{
    string word;
    std::cout << "enter string to get position of first vowel" << std::endl;
    std::cin >> word;
    int indexOfVowel = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (isVowel(word[i]))
        {
            indexOfVowel = i;
            break;
        }
    }
    std::cout << "the position of first vowel is index " << indexOfVowel << std::endl;
}

// 31.	Determine the eligibility for a loan based on income, credit score, and age.
void function31()
{
    int min_income = 30000;
    int min_credit_score = 650;
    int min_age = 21;
    int max_age = 65;
    int user_income, user_credit_score, user_age;
    std::cout << "enter your monthly income" << std::endl;
    std::cin >> user_income;
    std::cout << "enter your credit score" << std::endl;
    std::cin >> user_credit_score;
    std::cout << "enter your age" << std::endl;
    std::cin >> user_age;
    if ((user_age >= min_age) && (user_credit_score >= min_credit_score) && (user_income >= min_income) && (user_age <= max_age))
    {
        std::cout << "You Are Eligible For The Loan" << std::endl;
        return;
    }
    std::cout << "You Are Not Eligible For The Loan";
}

// 32.	Check if a password meets complexity requirements (length, uppercase, lowercase, digit, special character).
void function32()
{
    string password;
    std::cout << "Enter Your Password" << std::endl;
    std::cin >> password;
    bool has_upper_case = false, has_lower_case = false, has_special_charecter = false, has_number = false;
    if (!(password.length() >= 8))
    {
        std::cout << "Incorrect Password ! Passwrod Length Must Be Greater Than 8" << std::endl;
        return;
    }
    for (int i = 0; i < password.length(); i++)
    {
        if (!has_lower_case)
        {
            if (islower(password[i]))
            {
                has_lower_case = true;
            }
        }
        if (!has_upper_case)
        {
            if (isupper(password[i]))
            {
                has_upper_case = true;
            }
        }
        if (!has_special_charecter)
        {
            if (!isalnum(password[i]))
            {
                has_special_charecter = true;
            }
        }
        if (!has_number)
        {
            if (isdigit(password[i]))
            {
                has_number = true;
            }
        }
    }

    std::cout << "Your Password Contains " << password.length() << std::endl;
    if ((has_lower_case) && (has_upper_case) && (has_special_charecter) && (has_number) && (password.length() >= 8))
    {
        std::cout << "Your Password Is Strong" << std::endl;
    }
    else
    {
        std::cout << "Your Password Is Weak" << std::endl;
    }
}

// 33.	Calculate the monthly installment for a loan given the principal, interest rate, and number of months.

void function33()
{
    int principal_amount, time_in_month;
    float annual_interest_rate;
    std::cout << "Enter Principal Amount" << std::endl;
    std::cin >> principal_amount;
    std::cout << "Enter Time In Months" << std::endl;
    std::cin >> time_in_month;
    std::cout << "Enter Rate Of Interest" << std::endl;
    std::cin >> annual_interest_rate;
    float monthly_interest_rate = annual_interest_rate / (12 * 100);
    float numerator = principal_amount * monthly_interest_rate * std::pow(1 + monthly_interest_rate, time_in_month);
    float denominator = std::pow(1 + monthly_interest_rate, time_in_month) - 1;
    float e_m_i = numerator / denominator;
    std::cout << "Your Monthly Installment Amount Is: " << e_m_i << std::endl;
}

// 34.	Determine if a user input is a valid Roman numeral.
void function34()
{
    string roman_number;
    std::cout << "enter the roman number" << std::endl;
    std::cin >> roman_number;
    char roman_val[] = {'m', 'd', 'c', 'l', 'x', 'v', 'i'};
    bool is_proper_roman = false;
    for (int i = 0; i < roman_number.length(); i++)
    {
        for (int j = 0; i < sizeof(roman_val) / sizeof(roman_val[0]); j++)
        {
            is_proper_roman = false;
            if (tolower(roman_number[i]) == roman_val[j])
            {
                is_proper_roman = true;
                break;
            }
        }
        if (!is_proper_roman)
        {
            std::cout << "Your Provided Value Is Incorrect" << endl;
            return;
        }
    }
    std::cout << "Your Provided Value Is Correct" << std::endl;
}

// 35.	Classify an angle as acute, right, obtuse, or straight based on its value.
void function35()
{
    int angle;
    std::cout << "Enter Your Angle" << std::endl;
    std::cin >> angle;
    if (angle < 0)
    {
        angle = 360 - angle;
    }
    if (angle == 0)
    {
        std::cout << "This Is Zero Angle" << std::endl;
        return;
    }
    if (angle > 0 && angle < 90)
    {
        std::cout << "This Is Accute Angle" << std::endl;
        return;
    }
    if (angle == 90)
    {
        std::cout << "This Is Right Angle" << std::endl;
        return;
    }
    if (angle > 90 && angle < 180)
    {
        std::cout << "This Is Obstute Angle" << std::endl;
        return;
    }
    if (angle == 180)
    {
        std::cout << "This Is Straight Angle" << std::endl;
        return;
    }
    if (angle > 180 && angle < 360)
    {
        std::cout << "This Is Reflex Angle" << std::endl;
        return;
    }
    if (angle == 360)
    {
        std::cout << "This Is Complete Angle" << std::endl;
        return;
    }
}

// 36.	Calculate the grade of a student based on their marks using multiple conditions.
void function36()
{
    int totalFullMark, markObtained;
    std::cout << "enter the total marks " << std::endl;
    std::cin >> totalFullMark;
    std::cout << "enter the marks you have obtained" << std::endl;
    std::cin >> markObtained;
    double totalPercent = (static_cast<double>(markObtained) / totalFullMark) * 100;
    if (totalPercent >= 90 && totalPercent <= 100)
    {
        std::cout << "Outstanding! you have got " << totalPercent << " so your grade is A+" << std::endl;
        return;
    }
    if (totalPercent >= 80 && totalPercent < 90)
    {
        std::cout << "Excellent! you have got " << totalPercent << " so your grade is A" << std::endl;
        return;
    }
    if (totalPercent >= 70 && totalPercent < 80)
    {
        std::cout << "Very Good! you have got " << totalPercent << " so your grade is B+" << std::endl;
        return;
    }
    if (totalPercent >= 60 && totalPercent < 70)
    {
        std::cout << "Good! you have got " << totalPercent << " so your grade is B" << std::endl;
        return;
    }
    if (totalPercent >= 50 && totalPercent < 60)
    {
        std::cout << "Satisfactory! you have got " << totalPercent << " so your grade is C+" << std::endl;
        return;
    }
    if (totalPercent >= 40 && totalPercent < 50)
    {
        std::cout << "Acceptable! you have got " << totalPercent << " so your grade is C" << std::endl;
        return;
    }
    if (totalPercent >= 30 && totalPercent < 40)
    {
        std::cout << "Partially Acceptable! you have got " << totalPercent << " so your grade is D+" << std::endl;
        return;
    }
    if (totalPercent >= 20 && totalPercent < 30)
    {
        std::cout << "Insufficient! you have got " << totalPercent << " so your grade is D" << std::endl;
        return;
    }
    if (totalPercent >= 0 && totalPercent < 20)
    {
        std::cout << "Very Insufficient! you have got " << totalPercent << " so your grade is E" << std::endl;
        return;
    }
}

// 37.	Write a program to find the average of five numbers.
void function37()
{
    int nums[5];
    int totalSum = 0;
    for (int i = 0; i < 5; i++)
    {
        std::cout << i << ". Enter The Number" << std::endl;
        std::cin >> nums[i];
    }
    for (int i = 0; i < 5; i++)
    {
        totalSum = totalSum + nums[i];
    }
    int average = totalSum / 5;
    std::cout << "The Average Of The Number You Provide Is " << average << std::endl;
}

// 38.	Write a program to find if a number is even or odd.
void function38()
{
    int number;
    std::cout << "enter a number to find its odd or even" << std::endl;
    std::cin >> number;
    if (number % 2 == 0)
    {
        std::cout << "the number is even";
    }
    else
    {
        std::cout << "the number is odd";
    }
}

// 39.	Write a program to display the multiplication table of a number.
void function39()
{
    int number;
    std::cout << "enter the number to get multiplicaion table" << std::endl;
    std::cin >> number;
    for (int i = 1; i <= 10; i++)
    {
        std::cout << number << " * " << i << " = " << number * i << std::endl;
    }
}

// 40.	Create a function that checks if a string is a palindrome.
void function40()
{
    string words;
    std::cout << "enter a string to reverse" << std::endl;
    std::cin >> words;
    string reversedWord;
    for (int i = words.length(); i >= 0; i--)
    {
        reversedWord = reversedWord + words[i];
    }
    std::cout << "the reversed word is " << reversedWord << std::endl;
}

// 41.	Write a function to calculate the power of a number (without using pow).
void function41()
{
    int base, power, totalNum = 1;
    std::cout << "enter the base number" << std::endl;
    std::cin >> base;
    std::cout << "enter the power of base number" << std::endl;
    std::cin >> power;
    int originalPower = power;
    while (power > 0)
    {
        totalNum = totalNum * base;
        power = power - 1;
    }
    std::cout << "the base " << base << " with Power " << originalPower << " is equal to " << totalNum << std::endl;
}

// 42.	Create a function to find the least common multiple (LCM) of two numbers.
void function42()
{
    int firstNum, secondNum;
    std::cout << "enter first number" << std::endl;
    std::cin >> firstNum;
    std::cout << "enter the second number" << std::endl;
    std::cin >> secondNum;
    int lcm = 1;
    int minN = min(firstNum, secondNum);
    for (int i = minN; i > 0; i--)
    {
        if (firstNum % i == 0 && secondNum % i == 0)
        {
            lcm = i;
            break;
        }
        else
        {
            minN = minN - 1;
        }
    }

    std::cout << "the lcm is " << lcm << std::endl;
}

// 43.	Write a recursive function to calculate the Fibonacci sequence.
int function43(int number)
{
    if (number <= 0)
    {
        return 0;
    }
    if (number == 1)
    {
        return 1;
    }
    else
    {
        return function43(number - 1) + function43(number - 2);
    }
}

// 44.	Write a function that converts a string to uppercase.
void function44()
{
    string word;
    std::cout << "enter a string to get it to UPPERCASE" << std::endl;
    std::cin >> word;
    for (int i = 0; i < word.length(); i++)
    {
        word[i] = toupper(word[i]);
    }
    std::cout << "the uppercase word is " << word << std::endl;
}

// 45.	Write a program to reverse an array.
void function45()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << ",";
    }
    std::cout << endl;
    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << ",";
    }
}

// 46.	Create a program to sort an array in ascending order.
// Using Bubble Sort
int function46()
{
    int arr[] = {1, 2, 3, 4, 53, 15, 27, 42, 58, 61, 74, 89, 100, 25};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < sizeOfArray; i++)
    {
        for (int j = 0; j < sizeOfArray - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < sizeOfArray; i++)
    {
        std::cout << arr[i] << ",";
    }
    return 0;
}
#include <unordered_map>
// 47.	Write a program to find the largest element in an array.
int function47()
{
    int arr[] = {1, 2, 3, 4, 53, 15, 27, 42, 58, 61, 74, 89, 100, 25};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    int largest = 0;
    for (int i = 0; i < sizeOfArray; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    std::cout << "The Largest Value Of This Array Is " << largest << std::endl;
    return 0;
}
// 48.	Create a program to find the frequency of a character in a string.
int function48()
{
    string sentence;
    std::cout << "Enter The String To Count The Frequency Of The Characters" << std::endl;
    getline(std::cin, sentence);
    std::unordered_map<char, int> frequency;
    for (char c : sentence)
    {
        frequency[c]++;
    }
    for (const auto &pair : frequency)
    {
        std::cout << "Character: '" << pair.first << "' Frequency: " << pair.second << std::endl;
    }
}

// 49	Write a program to remove all spaces from a string.
char function49()
{
    string sentence;
    std::cout << "Enter The String To Count The Frequency Of The Characters" << std::endl;
    getline(std::cin, sentence);
    string result;
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] != ' ')
        {
            result = result + sentence[i];
        }
    }
    std::cout << "The Sentence Without Space Is " << result << std::endl;
}

// 50.	Create a program to find the second largest element in an array.
int function50()
{
    int arr[] = {1, 2, 3, 4, 53, 15, 27, 42, 58, 61, 74, 89, 100, 25};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < sizeOfArray; i++)
    {
        for (int j = 0; j < sizeOfArray - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    std::cout << "The Second Largest Element Of This Array Is " << arr[sizeOfArray - 2] << std::endl;
    return 0;
}

// 51.	Write a program to check if a string is an anagram.
#include <algorithm>
#include <string>
void function51()
{
    string phrase1, phrase2;
    std::cout << "this program checks that the provided phrasea are anagram or not" << std::endl;
    std::cout << "enter phrase to find its anagram or not" << std::endl;
    getline(std::cin, phrase1);
    std::cout << "enter phrase to find its anagram or not" << std::endl;
    getline(std::cin, phrase2);
    phrase1.erase(remove(phrase1.begin(), phrase1.end(), ' '), phrase1.end());
    phrase2.erase(remove(phrase2.begin(), phrase2.end(), ' '), phrase2.end());
    if (phrase1.length() != phrase2.length())
    {
        std::cout << "the both phrases are not anagram" << std::endl;
        return;
    }
    std::sort(phrase1.begin(), phrase1.end());
    std::sort(phrase2.begin(), phrase2.end());
    if (phrase1 != phrase2)
    {
        std::cout << "the both phrases are not anagram" << std::endl;
        return;
    }
    else
    {
        std::cout << "the both phrases are anagram" << std::endl;
        return;
    }
}

// 52.	Create a program to split a string into words.
void function52()
{
    string sentence;
    std::cout << "enter the sentence to split into words" << std::endl;
    getline(std::cin, sentence);
    std::vector<std::string> words;
    string word;
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == ' ')
        {
            if (!word.empty())
            {
                words.push_back(word);
                word.clear();
            }
        }
        else {
            word = word + sentence[i];
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    std::cout << "The words in the sentence are:" << std::endl;
    for (const std::string& w : words) {
        std::cout << w << std::endl;
    }
}


int main()
{
    function52();
    return 0;
}