class Solution {
public:
    int reverseNumber(int num) {
        // Implement logic to reverse the number
        int ans = 0 ;

        while(num!=0){
            int digit = num % 10;
            //reverse number creation;
            ans = ans*10+digit;
            //num updation to avoid infinite loop
            num = num/10;
        }
        return ans;
    }

    string isPalindrome(int num) {
            int Original = num;
            int rev = reverseNumber(num);

                if(Original==rev){
                    return"Yes";
                }
                else{
                    return"No";
                }
    }
};
