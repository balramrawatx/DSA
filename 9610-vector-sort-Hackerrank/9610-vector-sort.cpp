#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   
    int n;
    if(!(cin>>n)) return 0;
    vector<int>v(n);
    
    for(int i =0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    for(int i =0; i<n; i++){
        cout<<v[i]<<" ";
    }
    
    
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna