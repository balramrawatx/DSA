class Solution {
public:
    
    int addDigits(int num) {
        int sum =0;
        int rem;
        while(num!=0){
            rem = num%10;
            sum+=rem;
            num/=10;
        }
        if(sum>=10){
            return addDigits(sum);
        }
        else return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna