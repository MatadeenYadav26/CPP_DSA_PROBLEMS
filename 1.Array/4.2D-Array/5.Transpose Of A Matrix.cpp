class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        // original matrix ka size nikal rahe hain
        int rows = matrix.size();          // kitni rows hain
        int cols = matrix[0].size();      // kitne columns hain

        // transpose matrix banate hain
        // size ulta ho jaata hai (cols x rows)
        vector<vector<int>> ans(cols, vector<int>(rows, 0));

        // har element ko uski new position pe daalenge
        for(int i = 0; i < cols; i++){           // new matrix ki rows (old ke cols)
            for(int j = 0; j < rows; j++){       // new matrix ke cols (old ke rows)
                
                // main logic:
                // matrix[j][i] → ans[i][j]
                // matlab row aur column swap ho rahe hain
                ans[i][j] = matrix[j][i];
            }
        }

        return ans;  // final transpose matrix return
    }
};
