// min value :
#include <limits.h> // always add it to use : INT_MAX or INT_MIN;
class Solution {
public:
    int findMaximum(vector<int>& arr) {
        // Your code here
        int size = arr.size();
        int mini = INT_MAX;

        for(int i = 0 ; i< size ; i++){

            mini = min(arr[i],mini);
        }
        return mini;
    }
};
