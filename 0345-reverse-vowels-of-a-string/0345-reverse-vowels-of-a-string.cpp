class Solution {
public:
    bool isVowel(char c){
        c=tolower(c);
        return c =='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    string reverseVowels(string s) {
        int left = 0;
        int right = s.size()-1;

        while(left<right){
            while(left<right && !isVowel(s[left])){
                left++;
            }

            while(left<right && !isVowel(s[right])){
                right--;
            }
            if(left<right){
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna