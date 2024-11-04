#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;


//! Two pointer approch (Optimal)
void movesZeros(vector <int>& nums){
    int j = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != 0){
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main() {
    vector <int> v = {0,1,0,4};
    movesZeros(v);

    for(int val : v){
        cout << val << " ";
    }
    return 0;
}