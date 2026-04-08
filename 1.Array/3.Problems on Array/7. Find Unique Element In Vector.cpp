class Solution {
public:
    vector<int> reverseArray(const vector<int>& arr) {
        
        // Implement logic to reverse the array
        
        // create a copy of arr:
        vector<int>num = arr;

        int n = num.size();

        // catching up indexes:
        int i = 0 ;
        int j = n-1;


        // looping and swapping logic:

        while(i<j){  // <= means element khudse v swap ho rha , only < means khudse swap nhi ho rha vo as it is hai
            swap(num[i],num[j]);
            i++;
            j--;

        }

        return num;


    }
};
