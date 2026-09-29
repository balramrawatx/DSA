class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size(), w,h, area;
        int maxWater =0, L =0, R=n-1;
        while(L<R){
            w=R-L;
            h=min(height[R], height[L]);
            area=w*h;
            maxWater=max(area,maxWater);
            height[L]<height[R]?L++:R--;
        }
        return maxWater;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna