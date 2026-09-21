class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>triangle;
        //outer
        for(int i =0; i<numRows; i++){
            vector<int>rows(i+1, 1);
            //inner
            for(int j =1; j<i; j++){
                rows[j]= triangle[i-1][j-1]+triangle[i-1][j];
            }
            triangle.push_back(rows);
        }

        return triangle;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna