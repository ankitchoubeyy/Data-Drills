#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

void updateEvenPosition(string str){
    for(int i = 0; i < str.length(); i++){
        if(i%2 != 0){
            str[i] = 'a';
        }
    }
    cout << str << endl;
}

int main() {
    string str = "Hellow";
    updateEvenPosition(str);
    return 0;
}