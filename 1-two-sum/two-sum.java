class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n = nums.length;  // ✅ Correct way to get length
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {  // ✅ start j from i+1 to avoid duplicate pairs
                if (nums[i] + nums[j] == target) {
                    return new int[]{i, j};  // ✅ return array with indices
                }
            }
        }
        return new int[]{};  // ✅ return empty array if no solution found
    }
}
