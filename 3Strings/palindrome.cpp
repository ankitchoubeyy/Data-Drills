#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

//! Check palindrome
void checkPalindrome(string str){
    int start = 0, end = str.size() - 1;

    while (start < end)
    {
        if(str[start] != str[end]){
            cout << "Not a palindrome string" << endl;
        }
        else cout << "Palindrome string" << endl;
        start++;
        end--;
    }
    
}

int main() {
    string str1 = "mam";
    checkPalindrome(str1);
    return 0;
}