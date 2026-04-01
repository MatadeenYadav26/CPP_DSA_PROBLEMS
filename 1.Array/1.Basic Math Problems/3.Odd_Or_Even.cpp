class Solution {
public:
    string checkEvenOdd(int num) {
        // Implement logic to check if num is even or odd
        // if(num % 2 == 0){
        //     return"Even";
        // }
        // else{
        //     return "Odd";
        // }

        if(num & 1){
            // num&1=1 , tabhi if ki value true hogi.
            return"Odd";
        }else{
            return"Even";
        }
    }
};
