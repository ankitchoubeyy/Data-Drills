#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

//! fibonacci number of nth term
int fibonacci(int n){
    if(n == 1 || n == 2) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    cout << fibonacci(10) << endl;
    return 0;
}