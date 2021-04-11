package io.zihengcat.leetcode.array;

/**
 * LeetCode 1822. Sign of the Product of an Array
 * https://leetcode.com/problems/sign-of-the-product-of-an-array/
 */
public class SignOfTheProductOfAnArray {
    public static void main(String[] args) {
        // ...
    }
    public int arraySign(int[] nums) {
        if (nums == null || nums.length == 0) {
            return 0;
        }
        int nLen = nums.length;
        int productSign = 1;
        for (int i = 0; i < nLen; i++) {
            if (nums[i] > 0) {
                productSign *= 1;
            } else if (nums[i] < 0) {
                productSign *= -1;
            } else if (nums[i] == 0) {
                return 0;
            }
        }
        return productSign;
    }
};

/* EOF */
