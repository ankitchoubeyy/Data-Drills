#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

void sumOfTwo(int *x, int *y){
    cout << "Sum : " << *x + *y << endl;
}

void find(int n, int*prt1, int* ptr2){
    *ptr2 = n%10; // last digit
    while (n > 9)
    {
        n = n/10;
    }
    *prt1 = n;
    return;
}

int main() {
    int x = 5;
    int y = 15;
    cout << &x << endl;
    cout << x << endl;

    //! storing address using a pointer
    int* address = &x;
    cout << address << endl ;

    //! Deference operator *
    int z = *address;
    cout << z << endl;

    sumOfTwo(&x, &y);
 
    return 0;
}