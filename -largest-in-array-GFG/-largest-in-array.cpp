class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        if(n==0) return 0;
        else{
        sort(arr.begin(), arr.end());
        return arr[n-1];
        }
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna