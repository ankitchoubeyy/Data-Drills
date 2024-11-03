#include <iostream>
#include <limits>
using namespace std;

//! Print array
void printArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

//! Q1) smallest value
void printSmallestValue(int arr[], int size){
    int smallestValue = __INT_MAX__;
    for(int i = 0; i < size; i++){
        if(arr[i] < smallestValue){
            smallestValue = arr[i];
        }
    }
    cout << "Smallest value: " <<  smallestValue << endl;
}
//! Q2) largest value
void printLargestValue(int arr[], int size){
    int largestValue = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] > largestValue){
            largestValue = arr[i];
        }
    }
    cout << "Largest value: " <<  largestValue << endl;
}

int main() {
    int arr[5] = {12,45,66,45,34};
    // cout << arr[4] << endl;

    //! calculating size of array
    cout << sizeof(arr)/sizeof(arr[1]) << endl; 

    printArr(arr, 5);
    printSmallestValue(arr, 5);
    printLargestValue(arr, 5);
    return 0;
}