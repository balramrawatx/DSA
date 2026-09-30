class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;

        double result = log10(n)/log10(3);
        return fmod(result, 1)==0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna