#include <iostream>
        if (num == candidate) {
            count++;
        }
    }

    if (count > nums.size() / 2) {
        cout << candidate << endl;
    } else {
        cout << "No majority element found." << endl;
    }
}

int main() {
    vector <int> v = {1,2,1,4,1};
    majorityElement(v);
    
    return 0;
}