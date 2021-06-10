package io.zihengcat.leetcode.window;

/**
 * LeetCode 485. Max Consecutive Ones
 * https://leetcode.com/problems/max-consecutive-ones/
 */
public class MaxConsecutiveOnes {
    public static void main(String[] args) {
        // ...
    }
    public int findMaxConsecutiveOnes(int[] nums) {
        if (nums == null || nums.length == 0) {
            return 0;
        }
        int maxLen = 0;
        int wLeft = 0;
        int wRight = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == 1) {
                wLeft = i;
                wRight = extendRight(nums, i);
                if (wRight - wLeft + 1 > maxLen) {
                    maxLen = wRight - wLeft + 1;
                }
                i = wRight;
            }
        }
        return maxLen;
    }
    private int extendRight(int[] nums, int i) {
        while (i < nums.length && nums[i] == 1) {
            i++;
        }
        return i - 1;
    }
}

/* EOF */
