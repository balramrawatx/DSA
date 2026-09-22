class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int>vec;
        if(n==0) return vec;
        sort(arr.begin(), arr.end());
        
        vec.push_back(arr.front());
        vec.push_back(arr.back());
        return vec;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna