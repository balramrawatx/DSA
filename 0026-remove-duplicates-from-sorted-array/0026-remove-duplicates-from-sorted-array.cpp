class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int insert =1;
        if(nums.size()==0) return 0;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i]!=nums[i-1]){
                nums[insert]= nums[i];
                insert++;
            }
        }
        return insert;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna