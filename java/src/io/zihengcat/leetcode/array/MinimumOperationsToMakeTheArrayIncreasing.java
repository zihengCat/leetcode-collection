package io.zihengcat.leetcode.array;

/**
 * LeetCode 1827. Minimum Operations to Make the Array Increasing
 * https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/
 */
public class MinimumOperationsToMakeTheArrayIncreasing {
    public static void main(String[] args) {
        // ...
    }
    public int minOperations(int[] nums) {
        if (nums == null || nums.length < 2) {
            return 0;
        }
        int opCnt = 0;
        int prevNum = nums[0];
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] <= prevNum) {
                prevNum += 1;
                opCnt += prevNum - nums[i];
            } else {
                prevNum = nums[i];
            }
        }
        return opCnt;
    }
}

/* EOF */
