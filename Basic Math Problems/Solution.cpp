#include <iostream>
#include <vector>
using namespace std;
bool isPrime(int num)
{
    if (num <= 1)
        return false;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
std::vector<int> findAllPrimeNumbers(int number)
{
    std::vector<int> primes;

    for (int i = 2; i < number; i++)
    {
        if (isPrime(i))
        {
            primes.push_back(i);
        }
    }
    for (int prime : primes)
    {
        std::cout << prime << " , ";
    }
    std::cout << std::endl;

    return primes;
}
int numsOfDivisor(int num)
{
    int totalDivisor = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            totalDivisor += 1;
        }
    }
    return totalDivisor;
}
int totalSumOfDivisor(int num)
{
    int totalSumOfDiv = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            totalSumOfDiv += i;
        }
    }
    return totalSumOfDiv;
}
int lowestCommonMultiple(int num1, int num2)
{
    int LCM = 1;
    for (int i = 1; i <= num1; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            LCM *= i;
        }
    }
    return LCM;
}
bool isPerfectSquare(int num)
{
    for (int i = 1; i < num / 2; i++)
    {
        if (i * i == num)
        {
            return true;
            break;
        }
    }
    return false;
}
int findPrimeFactors(int num)
{
    std::vector<int> primeFactors;
    int largestPrimeFactor = 1;
    if (num <= 1)
    {
        std::cout << "No prime factorization for " << num << std::endl;
        return largestPrimeFactor;
    }
    while (num % 2 == 0)
    {
        primeFactors.push_back(2);
        num /= 2;
        largestPrimeFactor = 2;
    }

    for (int i = 3; i * i <= num; i += 2)
    {
        while (num % i == 0)
        {
            primeFactors.push_back(i);
            largestPrimeFactor = i;
            num /= i;
        }
    }
    if (num > 2)
    {
        primeFactors.push_back(num);
        largestPrimeFactor = num;
    }
    for (int prime : primeFactors)
    {
        std::cout << prime << " , ";
    }
    return largestPrimeFactor;
}
int findTrailingZeros(int num)
{
    int count = 0;
    for (int i = 1; i < num; i++)
    {
        if (i % 10 == 0)
        {
            count++;
        }
    }
    return count;
}
int gbd(int num, int num2)
{
    while (num2 != 0)
    {
        int temp = num2;
        num2 = num % num2;
        num = temp;
    }
    return num;
}
bool isCoPrime(int num, int num2)
{
    if (gbd(num, num2) == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int smallestPrimeFactor(int num)
{
    if (num == 2)
    {
        return 2;
    }
    for (int i = 2; i * i <= num; i += 2)
    {
        if (num % i == 0)
        {
            return i;
        }
    }
    return num;
}
int eulersTotient(int num)
{
    int count = 1;
    for (int i = 1; i <= num; i++)
    {
        if (gbd(i, num) == 1)
        {
            count += 1;
        }
    }
    return count;
}
int sumOfNPrimeNum(int num)
{
    if (num == 0)
    {
        std::cout << "Can't Find The Sum" << std::endl;
        return 0;
    }

    int sum = 0;
    if (num == 1)
    {
        return 1;
    }
    for (int i = 2; i <= num; i++)
    {
        if (isPrime(i))
        {
            sum += i;
        }
    }
    return sum;
}
int sumOfCompositeNumbers(int num)
{
    int totalSum = 0;
    for (int i = 1; i <= num; i++)
    {
        if (!isPrime(i))
        {
            totalSum += i;
        }
    }
    return totalSum;
}
int findMax(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
int findMin(int num1, int num2)
{
    if (num1 > num2)
    {
        return num2;
    }
    else
    {
        return num1;
    }
}
int findPrimeInRanges(int num1, int num2)
{
    int max = findMax(num1, num2);
    int min = findMin(num1, num2);

    for (int i = min; i < max; i++)
    {
        if (isPrime(i))
        {
            std::cout << i << "," << std::endl;
        }
    }
    return 0;
}
int sumOfDigits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}
bool isNumberIsPalindrome(int num)
{
    int realNumber = num;
    int reverseNumber = 0;
    while (num > 0)
    {
        int reminder = num % 10;
        reverseNumber = reverseNumber * 10 + reminder;
        num = num / 10;
    }
    if (reverseNumber == realNumber)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int reverseNumber(int num)
{
    int reverseNumber = 0;
    while (num > 0)
    {
        reverseNumber = reverseNumber * 10 + num % 10;
        num = num / 10;
    }
    return reverseNumber;
}
bool isNumberIsPowerOf2(int num)
{
    if (num <= 0)
        return false;
    return (num & (num - 1)) == 0;
}
int sumOfFirstNNaturalNumber(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        sum += i;
    }
    return sum;
}
int sumOfFirstNOddNumber(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    return sum;
}
int sumOfFirstNEvenNumber(int num)
{
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    return sum;
}
int square(int num)
{
    return num * num;
}
int sumOfSqOfFirstNNumber(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum += square(i);
    }
    return sum;
}
int cube(int num)
{
    return num * num * num;
}
int sumOfCubeOfFirstNNumber(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum += cube(i);
    }
    return sum;
}
int fibonacci(int num)
{
    if (num == 0)
    {
        return 0;
    }
    if (num == 1)
    {
        return 1;
    }
    return fibonacci(num - 1) + fibonacci(num - 2);
}

void erastothenes(int num)
{
    int prime[num + 1];
    for (int i = 0; i <= num; i++)
    {
        prime[i] = 1;
    }

    prime[0] = prime[1] = 0;

    for (int i = 2; i * i <= num; i++) 
    {
        if (prime[i] == 1) 
        {
            for (int j = i * i; j <= num; j = j + i) 
            {
                prime[j] = 0;
            }
        }
    }

    for (int i = 2; i <= num; i++)
    {
        if (prime[i] == 1) {
            cout << i << ", ";
        }
    }
    cout << endl;
}
int findPow(int num, int power)
{
    int ans = 1;
    while (power > 0)
    {
        if (power % 2 != 0)
        {
            ans *= num;
            power -= 1;
        }
        else
        {
            power = power / 2;
            num = num * num;
        }
    }
    return ans;
}

int sumOfNFibonacci(int num){
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        sum +=finonacci(i);
    }
    return sum;
}

int countingSetBits(int num){
    int count = 0;
    while (num > 0)
    {
        if (num % 2 == 1)
        {
            count++;
        }
        num = num / 2;
    }
    return count;
}

int decimalToBinary(int num){
    int binary = 0;
    int i = 0;
    while (num > 0)
    {
        int reminder = num % 2;
        binary = binary + reminder * pow(10, i);
        num = num / 2;
        i++;
    }
    return binary;
}
int binaryToDecimal(int num){
    int decimal = 0;
    int i = 0;
    while (num > 0)
    {
        int reminder = num % 10;
        decimal = decimal + reminder * pow(2, i);
        num = num / 10;
        i++;
    }
    return decimal;
}
void swap(int num1, int num2){
    num1 = num1 ^ num2;
    num2 =  num1 ^ num2;
    num1 = num1 ^ num2;
}

void binaryRepresentation(int num){
    for (int i = 31; i >= 0; i--)
    {
        int k = num >> i & 1;
        cout << k;
    }
}
int main()
{
    int num = 3;
erastothenes(21);
    return 0;
}
