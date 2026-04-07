class Solution {
public:
    double findAverage(const vector<int>& arr) {
        // Implement logic to find the average
        double ans = 0;
        int totalSum = 0;
        int size = arr.size();
        

        for(int i = 0 ; i < size ; i++){
            int value = arr[i];
            totalSum += value;
        }

        // ans = double(totalSum)/size;
        ans = (totalSum*1.0)/size;


    }
};
