#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

//! Factorial
int factorial(int n){
    if(n == 0){
        return 1;
    }
    else 
    return n * (factorial(n-1));
}

//! print n to 1
void printNum(int n){
    if(n == 0) return;
    cout << n << endl;
    printNum(n - 1);
}
//! print 1 to n
void print(int n){
    if(n == 0) return;
    print(n - 1);
    cout << n << endl;
}
//! print sum of 1 to n
int printSum(int n){
    int sum = 0;
    if(n == 0) return 0;
    return n + printSum(n-1);
}

int main() {

    // cout << factorial(4) << endl;

    // printNum(4);
    // print(5);

    cout << printSum(5);
 
    return 0;
}