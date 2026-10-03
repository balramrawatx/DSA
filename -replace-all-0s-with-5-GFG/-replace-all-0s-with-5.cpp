class Solution {
  public:
    int convertFive(int n) {
        // code here
        if(n==0) return 5;
        int rem, sum=0;
        while(n>0){
            rem = n%10;
            if(rem==0){
                sum=sum*10+5;
            } else sum=sum*10+rem;
            
            
            n/=10;
        }
        
        int res=0;
        
        while(sum>0){
            rem = sum%10;
            if(rem==0){
                res=res*10+5;
            } else res=res*10+rem;
            
            
            sum/=10;
        }
        
        
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna