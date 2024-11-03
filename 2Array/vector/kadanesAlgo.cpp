#include <iostream>
#include <climits>
#include <vector>
using namespace std;

void maxSubArray(vector <int> nums){
    //! Algorithm
    int currSum = 0, maxSum = INT_MIN;
    for(int val : nums){ // for each
        currSum += val;
        maxSum = max(currSum, maxSum);

        if(currSum < 0){
            currSum = 0;
        }
    }

    cout << "Max sum is: " << currSum << endl;
}

int main() {

    vector <int> nums = {5,4,-1,7,8};
    maxSubArray(nums);
    
    return 0;
}