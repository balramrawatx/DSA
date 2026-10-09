class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>v;

        int sum =0;
        int Size = nums.size();
        for(int i =0; i<Size; i++){
            sum+=nums[i];
            v.push_back(sum);
        }
        return v;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna