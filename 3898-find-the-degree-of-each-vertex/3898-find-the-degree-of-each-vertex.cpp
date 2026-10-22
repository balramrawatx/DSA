class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int>v;
        int n = matrix[0].size();

        for(int i =0; i<n; i++){
            int sum=0;
            for(int j =0; j<matrix[i].size(); j++){
                sum+=matrix[i][j];
            }
            v.push_back(sum);
        }
        return v;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna