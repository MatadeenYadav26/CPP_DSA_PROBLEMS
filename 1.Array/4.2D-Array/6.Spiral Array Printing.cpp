class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int n = matrix.size();        // total rows
        int m = matrix[0].size();     // total columns

        int startingRow = 0;          // top boundary
        int endingRow = n - 1;        // bottom boundary
        int startingCol = 0;          // left boundary
        int endingCol = m - 1;        // right boundary

        vector<int> ans;

        // jab tak boundaries valid hai tab tak spiral chalega
        while (startingRow <= endingRow && startingCol <= endingCol) {

            // 1️⃣ Top row print (left → right)
            for (int col = startingCol; col <= endingCol; col++) {
                ans.push_back(matrix[startingRow][col]);
            }
            startingRow++;  // upar wali row print ho gayi, niche shift karo

            // 2️⃣ Right column print (top → bottom)
            for (int row = startingRow; row <= endingRow; row++) {
                ans.push_back(matrix[row][endingCol]);
            }
            endingCol--;   // right column print ho gaya, left shift karo

            // 3️⃣ Bottom row print (right → left)
            if (startingRow <= endingRow) {   // edge case handle (single row)
                for (int col = endingCol; col >= startingCol; col--) {
                    ans.push_back(matrix[endingRow][col]);
                }
                endingRow--;   // bottom row print ho gayi, upar shift karo
            }

            // 4️⃣ Left column print (bottom → top)
            if (startingCol <= endingCol) {   // edge case handle (single column)
                for (int row = endingRow; row >= startingRow; row--) {
                    ans.push_back(matrix[row][startingCol]);
                }
                startingCol++;   // left column print ho gaya, right shift karo
            }
        }

        return ans;   // final spiral order return
    }
};
