#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

void sortNumber(vector <int> &nums){

    for(int i = 0; i < nums.size(); i++){
        for(int j = i+1; j < nums.size(); j++){
            if(nums[i] > nums[j]){
                swap(nums[i], nums[j]);
            }
        }
    }
}

// printVector
void printVector(vector <int> &nums){
    for(int val : nums){
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    vector <int> v = {1,-3,5,-4,9,11};
    sortNumber(v);
    printVector(v);
    return 0;
}