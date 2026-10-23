class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int n = s.size();
        int st =0;
        int end = n-1;
        while(st<end){
            swap(s[st++], s[end--]);
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna