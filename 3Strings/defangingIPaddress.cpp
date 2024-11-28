#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

void defangingIP(string str){
    int index = 0;
    string ans;

    while(index < str.size()){
        if (str[index] == '.')
        {
            ans += "[.]";
        }
        else{
            ans += str[index];
        }
        index++;
        
    }
    cout << ans << endl;
}

int main() {
    string IP1 = "123.45.678.987";
    cout << IP1 << endl;
    defangingIP(IP1); 
    return 0;
}