class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int min=INT_MAX;

        for(size_t i =0; i<nums.size(); i+=2){
            string concate = to_string(nums[i]) + to_string(nums[i+1]);
            int merge = stoi(concate);

            if(merge < min){
                min=merge;
            }
        }
        return min;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna