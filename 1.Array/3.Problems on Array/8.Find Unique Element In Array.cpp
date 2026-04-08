class Solution {
public:
    int findUniqueElement(vector<int>& nums){
        int ans = 0 ;  // base setup
        int n = nums.size();  // size of array k liye
        for(int i = 0 ; i < n ; i++){ // loop for going through each array element
             ans  = ans ^ nums[i]; // using XOR to eliminate duplicates
        }
        return ans; // output
    }
};
