class Solution {
  public:
    vector<int> findElements(vector<int> arr) {
        // code here
        vector<int>v;
        
        int n = arr.size();
        sort(arr.begin(), arr.end());
        for(int i =0; i<=n-3; i++){
            v.push_back(arr[i]);
        }
        return v;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna