class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        int n = s.size();
        for(int i=0; i<n; i++){
            int alpha = 26 - (s[i]-'a');

            sum+= alpha*(i+1);
        }
        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna