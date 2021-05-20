package io.zihengcat.leetcode.search;

/**
 * LeetCode 747. Largest Number At Least Twice of Others
 * https://leetcode.com/problems/largest-number-at-least-twice-of-others/
 */
public class LargestNumberAtLeastTwiceOfOthers {
    public static void main(String[] args) {
        // ...
    }
    public int dominantIndex(int[] nums) {
        if (nums == null || nums.length < 2) {
            return 0;
        }
        int largestNumIdx = -1;
        int largestNum = Integer.MIN_VALUE;
        int secondLargestNum = Integer.MIN_VALUE;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] > largestNum) {
                secondLargestNum = largestNum;
                largestNum = nums[i];
                largestNumIdx = i;
            } else if (nums[i] > secondLargestNum && nums[i] <= largestNum) {
                secondLargestNum = nums[i];
            }
        }
        return largestNum < secondLargestNum * 2 ? -1 : largestNumIdx;
    }
}

/* EOF */
