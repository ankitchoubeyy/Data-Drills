#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

void swap(int a, int b){
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "a : " << a << ", b : " << b << endl;
}

int main() {
    int a = 20, b = 50;
    char ch = 'a';
    bool boo = true;
    float flo = 3.5;
    double doub = 3.454;
    // swap(a, b);

    cout << sizeof(doub);
    return 0;
}