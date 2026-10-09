class Solution {
public:
    int mirrorDistance(int n) {
        int rev = 0;
        int storeN=n;
        while(n>0){
            int rem = n%10;
            rev = rev*10+rem;
            n/=10;
        }
        return abs(rev-storeN);

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna