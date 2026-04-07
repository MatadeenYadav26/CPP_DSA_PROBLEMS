#include <limits.h> // always add it to use : INT_MAX or INT_MIN;
class Solution {
public:
    int findMaximum(vector<int>& arr) {
        // Your code here
        int size = arr.size();
        int maxi = INT_MIN;

        for(int i = 0 ; i< size ; i++){

            maxi = max(arr[i],maxi);
        }
        return maxi;
    }
};
