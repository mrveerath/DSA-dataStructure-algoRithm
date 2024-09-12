#include <iostream>
#include <cmath>

using namespace std;

int cnt = 0;
void counter()
{
    if (cnt == 12)
    {
        return;
    }
    cnt = cnt + 1;
    std::cout << cnt << endl;
    cout << "Before calling counter(), cnt = " << cnt << endl;
    counter();
    cout << "After calling counter(), cnt = " << cnt << endl;
}

int sumOfNThNaturalNumber(int num)
{
    if (num == 1)
    {
        return 1;
    }
    int sum = num + sumOfNThNaturalNumber(num - 1);
    return sum;
}

int factorial(int num)
{
    if (num == 1)
    {
        return 1;
    }
    int totalFactorial = num * factorial(num - 1);
    return totalFactorial;
}

int powerOfPower(int num)
{
    if (num == 1)
    {
        return 1;
    }
    int totalNum = pow(num, num);
    return totalNum;
}

int powerOfNumber2(int num1, int num2){
    if (num2 == 0){
        return 1;
    }
    return num1 * powerOfNumber2(num1, num2 - 1);
}

int main(){
    int number1;
    int number2;
    std::cout << "Please Enter Base Number" << endl;
    std::cin >> number1;
    std::cout << "Please Enter Base Number" << endl;
    std::cin >> number2;
    int sumOfNumber = powerOfNumber2(number1,number2);
    std::cout << "The Total Is " << sumOfNumber;
}