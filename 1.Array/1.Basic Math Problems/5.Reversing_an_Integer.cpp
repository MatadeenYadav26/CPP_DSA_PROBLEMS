class Solution {
public:
            long long int reverseNumber(int num) {
        // Implement logic to reverse the number
        long long int ans = 0 ;

        while(num!=0){
            int digit = num % 10;
            //reverse number creation;
            ans = ans*10+digit;
            //num updation to avoid infinite loop
            num = num/10;
        }
        return ans;
    }

    int reverse(int num) {
        // Implement your solution here.
        // zero wala case handle karo:
        if (num==0){
            return 0 ;
        }
        // sign info store karo boolean flag variable me:
        // rule : if num > 0 : flag = 1 ; else num<0 : flag = 0.
        bool flag = 0;
        if(num>0){
            flag = 1;
        }
        else{
            // <0 wala case
            flag = 0;
        }
        // sign remove karo 

        num = abs(num) ;// abs() : function makes negattive to positive.

        // number reverse karo
        int ans = reverseNumber(num);
        // sign lagao reverse me
        // sign sirf negative wale case me hi lagega:
        if (flag == 0){
            ans = 0 - ans;
        }

        // range check:
        if(ans > INT_MAX){
            return 0;
        }
        if(ans < INT_MIN){
            return 0;
        }

        // value return kardo
        return ans;
    }
};
