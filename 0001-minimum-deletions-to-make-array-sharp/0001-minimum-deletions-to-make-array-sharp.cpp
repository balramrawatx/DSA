class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int n = nums.size();
        if(n<=1) return 0;

        int elements_kept =1;
        int last_kept_value = nums[0];
        for(int i =1; i<n; i++){
            if(nums[i]!=last_kept_value){
                elements_kept++;
                last_kept_value=nums[i];
            }
        }

        return n-elements_kept;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna