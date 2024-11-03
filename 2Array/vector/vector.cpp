#include <iostream>
#include <vector>
using namespace std;

int main() {
    //! syntax
    vector <int> v1;

    //! functions
    // cout << v1.size() << endl;
    // cout << v1.capacity() << endl;
    // v1.pop_back();
    // cout << v1.size() << endl;
    // cout << v1.capacity() << endl;
    v1.push_back(10);
    cout << v1.size() << endl;
    cout << v1.capacity() << endl;
    v1.push_back(20);
    v1.push_back(40);
    cout << v1.size() << endl;
    cout << v1.capacity() << endl;
    


    // cout << v1.front() << endl;
    // cout << v1.back() << endl;
    return 0;
}