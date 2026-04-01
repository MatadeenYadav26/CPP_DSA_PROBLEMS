#include<limits.h>
class Solution {
public:
    int smallestDigit(int num) {
        // Implement logic to find the smallest digit
        int smallest = INT_MAX;
        while(num!=0){
            int digit = num % 10;
            //check if digit is smallest or not
            //if jo new digit mere paas aya hai,
            //agar vo chota h ab tak kk smallest value se ,
            //then store this new digit
            if(digit < smallest){
                smallest = digit;
            }
            // update the loop to avoid infinite loop
            num = num /10;
        }
        return smallest;
    }
};

// 2nd : by using min function:

#include<limits.h>
class Solution {
public:
    int smallestDigit(int num) {
        // Implement logic to find the smallest digit
        int smallest = INT_MAX;
        while(num!=0){
            int digit = num % 10;
            //check if digit is smallest or not
            //if jo new digit mere paas aya hai,
            //agar vo chota h ab tak kk smallest value se ,
            //then store this new digit
            // if(digit < smallest){
            //     smallest = digit;
            // }
            // using function instead of line : 13,14,15
            smallest = min(digit,smallest);
            // update the loop to avoid infinite loop
            num = num /10;
        }
        return smallest;
    }
};
