#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <string>
using namespace std;

//! 1.) Swap two numbers
void swapNum(int a, int b)
{
    int num1 = a, num2 = b;
    num1 = num1 + num2;

    num2 = num1 - num2;
    num1 = num1 - num2;

    cout << num1 << " " << num2 << endl;
}

//! Prime number
bool checkPrime(int num)
{
    int count = 0;
    if (num <= 1)
        return false;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count > 2)
        return false;
    else
        return true;
}

//! checkReverse
void checkReverse(int num)
{
    int originalNum = num, reverse = 0;
    while (originalNum > 0)
    {
        int digit = originalNum % 10;
        reverse = reverse * 10 + digit;
        originalNum /= 10;
    }
    cout << "Reverse : " << reverse;
}

//! Palindrome
void checkPalindrome(int num)
{
    int originalNum = num, reverse = 0;
    while (originalNum > 0)
    {
        int digit = originalNum % 10;
        reverse = reverse * 10 + digit;
        originalNum /= 10;
    }

    // cout << reverse << " " << num << endl;
    if (num == reverse)
    {
        cout << "Palindrome Num" << endl;
    }
    else
        cout << "Not a palindrome" << endl;
}

//! calculating the power of n
void calculatePower(int num, int pow)
{
    int powVal = num;
    while (pow > 1)
    {
        powVal *= num;
        pow--;
    }
    cout << powVal << endl;
}

//! calculating the sum of first n natural numbers
void nNaturalNumSum(int n)
{
    int sum = (n * (n + 1)) / 2;
    cout << sum << endl;
}

//! String to lowerCase
void toLowerCase(string s1)
{
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    cout << s1 << endl;
}
//! String to uppercase
void toUpperCase(string s1)
{
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    cout << s1 << endl;
}

//! factorial
int fact(int n)
{
    if (n <= 1)
        return 1;
    if (n > 1)
    {
        return n * fact(n - 1);
    }
    return 0;
}

//! decToBin
void decToBin(int num)
{
    int binary[32];
    int i = 0;
    while (num > 0)
    {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }
    // printing binary array
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binary[j] << " ";
    }
}

//! C ==> F
void celciusToFaren(int c)
{
    float f = c * (9.0 / 5.0) + 32;
    cout << f << endl;
}
//! F ==> C
void farenToCel(int f)
{
    float c = (f - 32) * (5.0 / 9.0);
    cout << c << endl;
}

int main()
{

    // swapNum(8,5);
    // cout << checkPrime(18) << endl;
    // checkReverse(12345);
    // checkPalindrome(131);
    // calculatePower(2,10);
    // nNaturalNumSum(8);
    // toLowerCase("Ankit");
    // toUpperCase("choubey");

    // string s1 = "abc";
    // cout << s1.size();
    // cout << fact(5) << endl ;
    decToBin(9);
    // celciusToFaren(10);
    // farenToCel(10);

    return 0;
}