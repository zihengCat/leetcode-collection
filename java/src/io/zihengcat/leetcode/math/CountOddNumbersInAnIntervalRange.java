package io.zihengcat.leetcode.math;

/**
 * LeetCode 1523. Count Odd Numbers in an Interval Range
 * https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/
 */
public class CountOddNumbersInAnIntervalRange {
    public static void main(String[] args) {
        // ...
    }
    public int countOdds(int low, int high) {
        int cnt = (high - low) / 2;
        if (low % 2 == 1 || high % 2 == 1) {
            cnt++;
        }
        return cnt;
    }
}

/* EOF */

