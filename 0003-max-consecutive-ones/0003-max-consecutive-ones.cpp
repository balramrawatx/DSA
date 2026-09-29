class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count =0;
        int max1 =0;
        int n =nums.size();
        for(int i =0; i<n; i++){
            if(nums[i]==1){
                count++;
                max1=max(count, max1);
            }
            else count =0;
        }
        return max1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna