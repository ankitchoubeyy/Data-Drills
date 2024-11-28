#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

//! Check palindrome
void reverseString(string str)
{
    int start = 0, end = str.size() - 1;

    while (start < end)
    {
        swap(str[start], str[end]);
        start++;
        end--;
    }
    cout << str << endl;
}

int main()
{
    string str1 = "Ankit";
    reverseString(str1);
    return 0;
}