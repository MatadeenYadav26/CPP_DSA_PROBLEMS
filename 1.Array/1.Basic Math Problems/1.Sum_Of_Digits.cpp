class Solution {
public:
    int sumOfDigits(int num) {
        // Implement logic to calculate the sum of digits
        int sum = 0 ;
        while (num!=0){
            //find digit
            int digit = num%10;
            //sum digit
            sum = sum + digit;
            //update number
            num = num/10;
        }
        return sum;
    }
};
