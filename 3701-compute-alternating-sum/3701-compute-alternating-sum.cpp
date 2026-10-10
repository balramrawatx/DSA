class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int n = nums.size();
        int even = 0;
        int odd =0;
        for(int i =0; i<n; i++){
            if(i%2==0){
                even+=nums[i];
            } else odd+=nums[i];
        }
        return even - odd;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna