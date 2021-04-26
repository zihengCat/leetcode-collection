package io.zihengcat.leetcode.array;

/**
 * LeetCode 1512. Number of Good Pairs
 * https://leetcode.com/problems/number-of-good-pairs/
 */
class NumberOfGoodPairs {
    public static void main(String[] args) {
        // ...
    }
    public int numIdenticalPairs(int[] nums) {
        if (nums == null || nums.length < 2) {
            return 0;
        }
        int nLen = nums.length;
        int cnt = 0;
        for (int i = 0; i < nLen; i++) {
            for (int j = i + 1; j < nLen; j++) {
                if (nums[i] == nums[j]) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
}

/* EOF */
