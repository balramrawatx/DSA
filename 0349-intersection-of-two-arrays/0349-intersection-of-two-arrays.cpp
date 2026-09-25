class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int>s;
        for(int i=0; i<nums1.size(); i++){
            for(int j =0; j<nums2.size(); j++){
                if(nums1[i]==nums2[j]){
                    s.insert(nums1[i]);
                    break;
                }
            }
        }
       vector<int>v(s.begin(), s.end());
        return v;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna