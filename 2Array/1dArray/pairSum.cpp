#include <iostream>
#include <vector>
using namespace std;

//! Pair sum by Brute force method
void pairSum(vector <int> v, int target){
    for(int i = 0; i < v.size(); i++){
        for(int j = i+1; j < v.size(); j++){
            if(v[i] + v[j] == target){
                cout << v[i] << " " << v[j] << endl;
                break;
            }
        }
    }
}

//! Pair sum by optimal method
void pairSumOptimal(vector<int> v, int target) {
    int start = 0, end = v.size() - 1;
    
    while (start < end) {
        int pairSum = v[start] + v[end];
        
        if (pairSum < target) {
            start++;  // Increment start to increase the sum
        } 
        else if (pairSum > target) {
            end--;  // Decrement end to decrease the sum
        } 
        else {
            cout << v[start] << ", " << v[end] << endl;
            start++;  // Move both pointers after finding a valid pair
            end--;
        }
    }
}

int main() {
    vector <int> v = {2,7,11,15};
    // pairSum(v, 18);
    pairSumOptimal(v, 18);
 
    return 0;
}