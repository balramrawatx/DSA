class Solution {
  public:
    vector<int> alternateSort(vector<int>& arr) {
        // code here
        vector<int>v;
        
        int n = arr.size();
        sort(arr.begin(), arr.end());
        if(n%2==0){
            for(int i =0; i<n/2; i++){
            v.push_back(arr[n-i-1]);
            v.push_back(arr[i]);
        }
        }
        else {
            for(int i =0; i<(n/2)+1; i++){
                
                v.push_back(arr[n-i-1]);
                if(arr[i]==arr[n-i-1]){
                    break;
                }
                v.push_back(arr[i]);
                
            }
        
        
        return v;
    }
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna