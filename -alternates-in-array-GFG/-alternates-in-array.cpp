class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        // code here
        vector<int>v;
        int n = arr.size();
        for(int i=0; i<n; i+=2){
            v.push_back(arr[i]);
        }
        return v;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna