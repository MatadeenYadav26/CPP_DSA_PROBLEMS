class Solution {
public:
    std::pair<int, int> countZerosAndOnes(const std::vector<int>& nums) {
        // Implement this method
        int totalOnes = 0;
        int totalZeroes = 0;
        int size = nums.size();

        for(int i = 0 ; i < size ; i++){
            if(nums[i] == 0){
                totalZeroes++;
            }
            if(nums[i] == 1){
                totalOnes++;
            }
        }
        //return pairs
        return {totalZeroes,totalOnes};
    }
};
