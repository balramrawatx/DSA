class Solution {
    public void moveZeroes(int[] nums) {
        int n = nums.length;
        int st = 0;
        for(int i = 0; i<n; i++){
            if(nums[i]!=0){
                int temp = nums[st];
                nums[st]=nums[i];
                nums[i]=temp;
                st++;
            }
        }
    }
}