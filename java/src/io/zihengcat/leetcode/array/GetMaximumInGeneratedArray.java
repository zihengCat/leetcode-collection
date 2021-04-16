package io.zihengcat.leetcode.array;

/**
 * LeetCode 1646. Get Maximum in Generated Array
 * https://leetcode.com/problems/get-maximum-in-generated-array/
 */
public class GetMaximumInGeneratedArray {
    public static void main(String[] args) {
        // ...
    }
    public int getMaximumGenerated(int n) {
        if (n < 0) {
            return 0;
        }
        if (n == 0 || n == 1) {
            return n;
        }
        int[] nums = new int[n + 1];
        nums[0] = 0;
        nums[1] = 1;
        int maxVal = nums[0];
        int vLen = n / 2;
        for (int i = 1; i <= vLen; i++) {
            if (2 * i <= n) {
                nums[2 * i] = nums[i];
                maxVal = Math.max(maxVal, nums[2 * i]);
            }
            if (2 * i + 1 <= n) {
                nums[2 * i + 1] = nums[i] + nums[i + 1];
                maxVal = Math.max(maxVal, nums[2 * i + 1]);
            }
        }
        return maxVal;
    }
}

/* EOF */
 