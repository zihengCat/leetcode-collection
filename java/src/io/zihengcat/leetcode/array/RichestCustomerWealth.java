package io.zihengcat.leetcode.array;

/**
 * LeetCode 1672. Richest Customer Wealth
 * https://leetcode.com/problems/richest-customer-wealth/ 
 */
public class RichestCustomerWealth {
    public static void main(String[] args) {
        // ...
    }
    public int maximumWealth(int[][] accounts) {
        if (accounts == null || accounts.length == 0) {
            return 0;
        }
        int max = 0;
        for (int i = 0; i < accounts.length; i++) {
            int val = 0;
            for (int j = 0; j < accounts[i].length; j++) {
                val += accounts[i][j];
            }
            if (val > max) {
                max = val;
            }
        }
        return max;
    }
}

/* EOF */
