#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums){
     int freq = 0, ans = 0;
        for(int i = 0; i < nums.size(); i++){
            if(freq == 0){
                ans = nums[i];
            }
            if(ans == nums[i]) freq++;
            else freq--;
        }
        return ans;
}

int main() {
    vector <int> v = {1,2,1,4,1};
    majorityElement(v);
 
    return 0;
}