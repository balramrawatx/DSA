void moveZeroes(int* nums, int numsSize) {
    int st = 0;
    int temp;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            temp = nums[st];
            nums[st] = nums[i];
            nums[i] = temp;
            st++;
        }
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna