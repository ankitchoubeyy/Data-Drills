#include <iostream>
using namespace std;

void decimalToBinary(int decimalValue)
{
    int decimalNum = decimalValue; //! Decimal number
    int power = 1;
    int ans = 0; //! Binary number
    int remainder;

    while (decimalNum > 0)
    {
        remainder = decimalNum % 2;
        decimalNum /= 2;
        ans += (remainder * power);
        power *= 10;
    }
    cout << ans << endl;
}

void binaryToDecimal(int binaryValue)
{
    int binaryNuber = binaryValue;
    int ans = 0;
    int power = 1;
    int remainder;
    while (binaryNuber > 0)
    {
        remainder = binaryNuber % 2;
        ans += (remainder * power);
        binaryNuber /= 10;
        power *= 2;
    }
    cout << ans << endl;
}

int main()
{
    decimalToBinary(15);
    binaryToDecimal(101);
    return 0;
}