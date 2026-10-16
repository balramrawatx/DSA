class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            while (nums[i] > 0) {
                int rem = nums[i] % 10;

                nums[i] /= 10;
                if(rem==digit){
                    ++count;
                }
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna