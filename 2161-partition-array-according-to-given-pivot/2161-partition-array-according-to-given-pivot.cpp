class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int>v;
        for(int i =0; i<n; i++){
            if(nums[i]<pivot){
                v.push_back(nums[i]);
            }
        }
        for(int i = 0; i<n; i++){
            if(nums[i]==pivot){
                v.push_back(nums[i]);
            }
        }
        for(int i =0; i<n; i++){
            if(nums[i]>pivot){
                v.push_back(nums[i]);
            }
        }
        return v;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna