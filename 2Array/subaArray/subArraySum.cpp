#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
    
    int arr[] = {1,2,-3,4,5};
    int size = 5;
    
    int maxSum = 0;
    // printing subarray
    for(int st = 0; st < size; st++ ){
        int currentSum = 0;
        for(int end = st; end < size; end++){
            currentSum += arr[end];
            maxSum = max(currentSum, maxSum);
        }
        
    }
    cout << maxSum;
    return 0;
}