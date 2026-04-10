class Solution {
public:
    vector<int> shiftRight(const vector<int>& arr) {
        // Implement logic to shift array elements by one position

        int n = arr.size();
        vector <int> arr2 = arr;
        int lastElement = arr2[n-1];

        for(int i = n-1 ; i >= 0 ; i--){
            if(i != 0){
                arr2[i] = arr2[i-1];
            }
            else{
                arr2[0] = lastElement;
            }
        }

        return arr2;

    }
};
