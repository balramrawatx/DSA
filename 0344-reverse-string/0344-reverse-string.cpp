class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int len = s.size();
        char temp;
        for(int i =0; i<len/2; i++){
            temp= s[i];
            s[i]=s[len-1-i]; 
            s[len-1-i]=temp; 
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna