#include <iostream>
using namespace std;

//! Sum of Array
void arrSum(int arr[],int size){
    int sum = 0;
    for(int i= 0; i < size; i++){
        sum += arr[i];
    }
    cout << "sum : "<< sum << endl;
}

//! Product of Array
void arrMul(int arr[], int size){
    int mul = 1;
    for(int i = 0; i < size; i++)
    {
        mul *= arr[i];
    }
    cout << "multiply: " << mul << endl;
}

//! Intersection of array
void arrIntersection(int arr1[], int arr2[], int size1, int size2){
    if(size1 == size2){
        for(int i = 0; i < size1; i++){
            if(arr1[i] == arr2[i]){
                cout << arr1[i] << " ";
            }
        }
        cout << endl;
    }
    else{
        cout << "Size must be same for both array" << endl;
    }
}

int main() {
    int arr[] = {1,2,3,4,5};
    int arr1[] = {1,22,3,41,5};
    // arrSum(arr,5);
    // arrMul(arr,5);
    arrIntersection(arr, arr1,5,5);
    return 0;
}