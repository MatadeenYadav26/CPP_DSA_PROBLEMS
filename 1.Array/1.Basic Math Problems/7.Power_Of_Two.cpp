class Solution {
public:
    string isPowerOfTwo(int num) {
        // zero error case:
        if(num == 0){
            return"No";
        }
        // Implement logic to check if num is a power of 2 : below code is for cases > 0;
        if ((num & (num-1)) == 0) {
            return"Yes";
        }
        else{
            return"No";
        }
    }
};
