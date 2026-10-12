class Solution {
public:
    int findClosest(int x, int y, int z) {
        int diffx=abs(x-z);
        int diffy=abs(y-z);
        if(diffx==diffy) return 0;
        else if(diffx<diffy) return 1;
        else return 2;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna