class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        // s1: Temp array k last k values ko store karlo
        int n = nums.size();
        k = k % n;   // important fix
        vector <int> temp;

        for(int i = n-k ; i<=n-1 ; i++){
            int value = nums[i];
            temp.push_back(value);
        }

        //Step2: Shift Loop
        for(int i = n-1 ; i>=0 ; i--){
            if(i-k >= 0 ){
                nums[i] = nums[i-k];
            }
        }
        
        //Step3: Copy from temp array
        for(int i=0;i<k;i++){
            nums[i] = temp[i];
        }
    }
};
