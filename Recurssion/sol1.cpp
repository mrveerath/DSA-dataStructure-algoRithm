#include <iostream>
#include <stdio.h>
using namespace std;

int sumOfNaturalNumbers(int num)
{
    // * 1+2+3+4+5+6+7+8+9+....+N
    // * sum(n) = 1+2+3+4+5+6+7+8+9+.....+(n-2)+(n-1)+n
    // * sum(n) = sum(n-1)+n // recursion
    // * sum(N) = n*(n+1)/2 // bruteforce

    // * where 0 is not a natural number because the
    // * natural number starts from the 1
    // * Time Complexity = O(1)
    // * Space Complexity = O(1)
    if (num <= 0)
    {
        return 0;
    }

    return sumOfNaturalNumbers(num - 1) + num;
}

int factorialOfNumber(int num)
{
    // * n! = 1*2*3*4*5*6*7*8*9*....*n
    // * f(n) = f(n-1) * n till n becames less than equal to 1
    // * this is like the multiplication of the n natural number
    // * 0! = 1 == 1! = 1
    // * Time Complexity = O(N)
    // * Space Complexity = O(N)

    if (num <= 0)
    {
        return 1;
    }
    else
    {
        return factorialOfNumber(num - 1) * num;
    }
}

int exponentOfNumber(int num, int exponent)
{
    // * n^^exponent
    // * n*n*n*n*n*...*n nultiply exponent times
    // * suppose num = 2 and exponent = 4
    // * 2*2*2*2
    // * exp(n,m) = exp(n,m-1) * n
    // * Time Complexity = O(N)
    // * Space Complexity = O(n)
    if (exponent <= 0)
    {
        return 1;
    }
    else
    {
        return exponentOfNumber(num, exponent - 1) * num;
    }
}

int exponentOfNumber2(int num, int exponent)
{
    if (exponent <= 0)
    {
        return 1;
    }
    if (exponent == 1)
    {
        return num;
    }
    if (exponent % 2 == 0)
    {
        return exponentOfNumber2(num * num, exponent / 2);
    }
    else
    {
        return num * exponentOfNumber2(num * num, (exponent - 1) / 2);
    }
}

double taylorSeries(int x, int n)
{
    static double power = 1;
    static double factorial = 1;
    double result;

    if (n == 0)
    {
        return 1;
    }

    result = taylorSeries(x, n - 1);
    power = power * x;
    factorial = factorial * n;

    return result + (power / factorial);

    // * The Time Complexity Is O(N)
}

double anotherApproachTaylorSeries(double x, double f)
{
    if (f == 0)
    {
        return 1;
    }
    else
    {
        double power = exponentOfNumber(x, f);
        double factorial = factorialOfNumber(f);
        return (power / factorial) + anotherApproachTaylorSeries(x, f - 1);
        ;
    }

    // * The Time Complexity Is O(n^2)
}

double thirdApproachOfTaylorSeries(double x, double f)
{
    double s = 1;
    int i;
    double num = 1;
    double den = 1;
    for (i = 1; i <= f; i++)
    {
        num = num * x;
        den = den * i;
        s += num / den;
    }

    return s;
}

int fobonacci(int term)
{
    if (term <= 1)
    {
        return term;
    }
    else
    {
        return fobonacci(term - 2) + fobonacci(term - 1);
    }
}

int fibonacci2(int term)
{
    int term1 = 0;
    int term2 = 1;
    int s = term1 + term2;

    if (term <= 1)
    {
        return term;
    }

    for (int i = 2; i <= term; i++)
    {
        s = term1 + term2;
        term1 = term2;
        term2 = s;
    }
    return s;
}

int arr[10];

int fibonacci3(int term)
{

    if (term <= 1)
    {
        arr[term] = term;
        return term;
    }
    else
    {
        if (arr[term - 2] == -1)
        {
            arr[term - 2] = fibonacci3(term - 2);
        }
        if (arr[term - 1] == -1)
        {
            arr[term - 1] = fibonacci3(term - 1);
        }
        return arr[term - 2] + arr[term - 1];
    }
}

// * Combination Formulae -> Selector Formula

int combination(int n, int r)
{
    int t1, t2, t3;
    t1 = factorialOfNumber(n);
    t2 = factorialOfNumber(r);
    t3 = factorialOfNumber(n - r);
    return t1 / (t2 * t3);
}

int combinationRecursion(int n, int r)
{
    if (r == 0 || r == n)
    {
        return 1;
    }
    else
    {
        return combinationRecursion(n - 1, r - 1) + combinationRecursion(n - 1, r);
    }
}

// * Tower Of Hanoi
void TOH(int n, int a, int b, int c)
{
    if (n > 0)
    {
        TOH(n - 1, a, c, b);
        std::cout << "One Disk Moved From Tower " << a << " To Tower " << c << std::endl;
        TOH(n - 1, b, a, c);
    }
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        arr[i] = -1;
    }
    TOH(3, 1, 2, 3);

    // std::cout << "The Factorial Of Number Is : " << totalSum << std::endl;

    return 0;
}