#include <iostream>
using namespace std;

void firstPrymid(int noOfRow)
{
    for (int i = 0; i < noOfRow; i++)
    {
        for (int j = 0; j < noOfRow -i -1; j++)
        {
            std::cout << " ";
        }
        for (int j = 0; j < 2 * i + 1 ; j++)
        {
            std::cout << "*";
        }
        for (int j = 0; j < noOfRow -i -1; j++)
        {
            std::cout << " ";
        }
        std::cout << endl;
    }
}
void reverseFirstPrymid(int noOfRow)
{
    for (int i = 0; i < noOfRow; i++)
    {
        for (int j = 0; j < i ; j++)
        {
            std::cout << " ";
        }
        for (int j = 0; j < 2 * noOfRow -(2 * i + 1); j++)
        {
            std::cout << "*";
        }
        for (int j = 0; j < i ; j++)
        {
            std::cout << " ";
        }
        std::cout << endl;
    }
}
void trapezoid (int noOfRow){
    firstPrymid(noOfRow);
    reverseFirstPrymid(noOfRow);
}
void secondPrymid(int noOfRow)
{
    for (int i = 0; i < noOfRow; i++)
    {
        for (int j = 0; j < noOfRow -i -1; j++)
        {
            std::cout << " ";
        }
        for (int j = 0; j < 2 * i + 1 ; j++)
        {
            std::cout << j;
        }
        for (int j = 0; j < noOfRow -i -1; j++)
        {
            std::cout << " ";
        }
        std::cout << endl;
    }
}

void thirdPrymid(int noOfRow)
{
    for (int i = 0; i < noOfRow; i++)
    {
        for (int j = 0; j < noOfRow -i -1; j++)
        {
            std::cout << " ";
        }
        for (int j = 0; j < 2 * i + 1 ; j++)
        {
            std::cout << i;
        }
        for (int j = 0; j < noOfRow -i -1; j++)
        {
            std::cout << " ";
        }
        std::cout << endl;
    }
}

int main()
{
    int n;

    std::cin >> n;
    firstPrymid(n);
    secondPrymid(n);
    thirdPrymid(n);
    reverseFirstPrymid(n);
    trapezoid(n);
}