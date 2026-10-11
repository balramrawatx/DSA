class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        vector<int>v;
        int n = arr.size();
        if(n==1) return v = {-1};
        sort(arr.begin(), arr.end());
        if(arr[0]!=arr[1]){
            v = {arr[0], arr[1]};
            return v;
        }
        
        for(int i = 0; i<n-1; i++ ){
            int temp = arr[0];
            if(arr[i]!=arr[i+1]){
                v.push_back(arr[i]);
                v.push_back(arr[i+1]);
                return v;
            }
            
        }
        return v = {-1};
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna