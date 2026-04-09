class Solution {
public:
 vector<vector<int>> threeSum(vector<int>& nums) {
        // Implementation will go here



        vector<vector<int> >ans; 
        int n = nums.size();
        // do sorting fisrt:
        sort(nums.begin(),nums.end());
        // vector <int> arr ;
        // vector <int> ans ;

        for(int i = 0 ; i < n ; i++){
            if(i>0 && nums[i] == nums[i-1]){
                // is case me triplet check hi mat karo:
                // aage badh jao
                // current iteration skip kardo
                continue;
            }
            for (int j = i+1;j<n;j++){
                if(j>i+1 && nums[j] == nums[j-1]){
                // is case me triplet check hi mat karo:
                // aage badh jao
                // current iteration skip kardo
                continue;
            }
                for(int k = j+1;k<n;k++){
                    if(k>j+1 && nums[k] == nums[k-1]){
                // is case me triplet check hi mat karo:
                // aage badh jao
                // current iteration skip kardo
                continue;
            }
                    int first = nums[i];
                    int second = nums[j];
                    int third = nums[k];
                    int sum = first+second+third;
                    
                    if(sum == 0){
                        // store answer
                        vector<int> temp;
                        temp.push_back(first);
                        temp.push_back(second);
                        temp.push_back(third);
                        ans.push_back(temp);

                    }
                    }
            }
        }
        //return ans;
        return ans;
    }
};
