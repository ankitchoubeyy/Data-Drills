#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

void coutVowels(string str){
    int count = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == '0' || str[i] == 'u'){
            count++;
        }
    }
    cout << count << endl;
}

int main() {
    string myName = "ankit";
    coutVowels(myName);
    return 0;
}