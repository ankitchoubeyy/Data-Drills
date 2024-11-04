#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//! Two pass method - 1
void sort01(vector<int>& v) {  // Pass by reference to modify the original vector
    int noZero = 0;

    //! Counting the number of 0's
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == 0) noZero++;
    }

    //! Overwrite the vector
    for (int i = 0; i < v.size(); i++) {
        if (noZero > 0) {
            v[i] = 0;
            noZero--;
        } else {
            v[i] = 1;
        }
    }
}

//! Two pointer method - 2
void sort01by2ptr(vector<int>& v) {  // Pass by reference to modify the original vector
    int start = 0;
    int end = v.size() - 1;

    while (start < end) {
        if (v[start] == 0) {
            start++;
        } 
        else if (v[end] == 1) {
            end--;
        } 
        else {
            swap(v[start], v[end]);
            start++;
            end--;
        }
    }
}

//! Function to print the vector
void printVector(const vector<int>& v) {
    for (int val : v) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v1 = {1, 0, 1, 0, 1, 0, 0};
    vector<int> v2 = v1;  // Create a copy to test both functions separately

    cout << "Using Two Pass Method - 1:" << endl;
    sort01(v1);
    printVector(v1);

    cout << "Using Two Pointer Method - 2:" << endl;
    sort01by2ptr(v2);
    printVector(v2);

    return 0;
}
