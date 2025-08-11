
#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int totalSum = 0;
    vector<int> ret;
    for (int i = 0; i < digits.size(); i++)
    {
        totalSum = (totalSum * 10) + digits[i];
    }
    int incVal = totalSum + 1;
    std::cout<<incVal<<std::endl;
    while (incVal > 0)
    {
        ret.push_back(incVal % 10);
        incVal = incVal / 10;
    }
    std::reverse(ret.begin(), ret.end());
    return ret;
}

int main()
{
    vector<int> hello = {1, 2, 3, };
    vector<int> newHello;
    newHello = plusOne(hello);
    for (int i = 0; i < newHello.size(); i++)
    {
        cout << newHello[i] << "," << std::endl;
    }

    return 0;
}