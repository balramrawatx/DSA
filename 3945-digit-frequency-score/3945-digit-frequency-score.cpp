class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int>v;
        int sum =0; 
        while(n>0){
            int rem = n%10;
            v.push_back(rem);
            n/=10;
        }
        sort(v.begin(), v.end());
        int arrSize = v.size();
        int count =1;
        for(int i =0; i<arrSize; i++){
          
            if(i==arrSize-1 || v[i]!=v[i+1]){
                int product = count*v[i];
                sum+=product;
                count =1;
            }
            else {
                count++;
            }
        }
        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna