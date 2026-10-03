class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        // code here
      
        int rem;
        for(int i =0; i<arr.size(); i++){
            int sum =0, temp = arr[i];
            while(arr[i]>0){
                rem = arr[i]%10;
                sum = sum*10 + rem;
                arr[i]/=10;
            }
            if(temp!=sum){
                return false;
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna