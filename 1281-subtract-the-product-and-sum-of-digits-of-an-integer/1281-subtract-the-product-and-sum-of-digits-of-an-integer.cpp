class Solution {
public:
    int subtractProductAndSum(int n) {
        unsigned int result;
        int product =1;
        int sum =0;
        while(n>0){
            int rem;
            rem = n%10;
            sum+=rem;
            product*=rem;
            n/=10;
        }
        result = product - sum;
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna