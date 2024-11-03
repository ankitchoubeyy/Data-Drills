#include <iostream>
using namespace std;

//! Reverse array using 2 pointer approch
void reverseArray(int arr[], int size){
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    //? Print reverse array
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    
}

int main() {
    int arr[5] = {11,2,3,4,5};
    
    reverseArray(arr,5);
    return 0;
}