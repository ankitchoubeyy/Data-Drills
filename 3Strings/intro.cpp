#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    string firstName = "Ankit Choubey";
    // cout << firstName[4] << endl;

    char lastName[6] = {'C', 'h', 'o', 'u', 'b', 'e'};
    // cout << lastName << endl;

    //! Taking input
    string takingInput;
    // cout << "Enter the inputs";
    // getline(cin, takingInput);
    // cout << takingInput << endl;

    //! Printing using for loop
    string s1 = "Ankit";
    for(int i  = 0; s1[i] != '\0'; i++){
        cout << s1[i] << endl;
    }

    s1.append("Hello");
    cout << s1 << endl;
    cout << s1.size() << endl;
    cout << s1.find("k") << endl;
    return 0;
}