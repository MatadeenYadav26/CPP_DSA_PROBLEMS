class Solution {
public:
    string isPrime(int num) {
        // Implement logic to check if num is prime
       if(num==1){
            return"No";
        }

        if (num == 2 || num == 3){
            return"Yes";
        }

        int start = 2;
        int end = num-1;

        //logic -> 2-> (n-1);
        // agar kisine v remainder zero dediya toh not a prime;
        // agar kisine v remainder 0 nahi diya : Prime.

        for(int i=start;i<=end;i++){
            if(num%i == 0){
                return"No";
                }
            }
        return "Yes";
    }
};
