class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        

        int n = nums.size();
        vector<int>v = {-1,-1};
        long long max = LLONG_MIN;
        for(int i =0; i<n; i++){
            
            for(int j =0; j<n; j++){
                if(nums[i]+nums[j]==target && nums[i]>nums[j]){
                    long long current = (long long )nums[i]*nums[j];
                    if(current>max){
                        max = current;
                        v = {i,j};
                    }
                    
                }
               
            }
        }
        return v;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna