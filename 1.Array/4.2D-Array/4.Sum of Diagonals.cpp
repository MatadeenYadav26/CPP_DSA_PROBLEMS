// Leet-Code : 1572

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        // Step1: Sum of D1:
        int sum = 0;
        int rows = mat.size();
        int cols = mat[0].size();
        int n = mat.size();

        for(int i = 0 ; i < n ; i++){
            sum += mat[i][i];             
        }
        // Step2: Sum of D2:
        for(int i = 0 ; i <n ; i++){
            sum += mat[i][n-i-1];
        }
        // Step3: Remove Duplicates: if needed :
        if(n & 1){
            // n is odd
            sum = sum - mat[n/2][n/2];
        }

        // Step4: Return Sum:
        return sum;
    }
};
