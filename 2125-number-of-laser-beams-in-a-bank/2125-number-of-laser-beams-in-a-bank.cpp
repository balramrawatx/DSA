class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int total = 0, prev = 0;
        int n = bank.size();
        int m = bank[0].size();

        for (string& row : bank) {
            int curr = count(row.begin(), row.end(), '1');

            if(curr>0){
                total+=(curr*prev);
                prev=curr;
            }
        }
        return total;
    }
};