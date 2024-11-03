#include <iostream>
using namespace std;

//! linear Search
void linearSearch(int arr[],int size, int target){
    for(int i = 0; i <size; i++ ){
        if(arr[i] == target){
            cout << "Found at: " << i << endl;
            break;
        } else cout << "Not found" << endl;
        break;
    }
}

int main() {

    int arr[5] = {12,34,54,6,7};

    linearSearch(arr,5,5);
 
    return 0;
}