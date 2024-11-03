# Data Structures
- ways to organise data.

# Algorithms 
- Step by step to perfom a particular task.

---

# Array
- collection of similar  data types in c++.
- contiguious memory allocation + linear

### Syntax
```c++
int arr[5] = {11,22,33,6,74}; // for interger array
char myChar[5]; // for character array
```

### How to access arrays values?
- using index values
- index value start from 0 to 1.
example: 
```c++
    int arr[5] = {12,45,66,45,34};
    cout << arr[4] << endl;
```

# STL 
- STL : Standard template library
- It consists pre written code for basic operation like insert, delete, size,etc.

# Vector (stl)
- It is the dynamic array.
- with the capablity of resizing itself.

### Vector functions
- size() : size can be incr or decr
- capacity() : (it never decreses )
- push_back()
- pop_back()
- front()
- back()

# kadane's Algorithm
- It is the very optimised algo to find maximum sub array sum.
- It is used to calculate the **maximum sum of subarray**

```c++
void maxSubArray(vector <int> nums){
    //! Algorithm
    int currSum = 0, maxSum = INT_MIN;
    for(int val : nums){ // for each loop
        currSum += val;
        maxSum = max(currSum, maxSum);

        if(currSum < 0){
            currSum = 0;
        }
    }

    cout << "Max sum is: " << currSum << endl;
}
```



