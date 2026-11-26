class Solution {
    public boolean canAliceWin(int n) {
        Boolean Alice = false;
        int stones = 10;
        int num = n;
        while(num>=stones){
            
            num = num - stones;
            stones --;
            Alice = !Alice;
        }
        return Alice;
    }
}