class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        vector<int>roots;
        int D = b*b-4*a*c;
        if(D<0){
            roots.push_back(-1);
            return roots;
        }
        
        
        int root1 = floor((-b-sqrt(D))/(2.0*a));
        int root2 = floor((-b+sqrt(D))/(2.0*a));
        
        if(root1<root2){
            roots.push_back(root2);
        roots.push_back(root1);
        }
        else {
            roots.push_back(root1);
            roots.push_back(root2);
        }
        
        return roots;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna