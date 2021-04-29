package io.zihengcat.leetcode.others;

/**
 * LeetCode 1550. Three Consecutive Odds
 * https://leetcode.com/problems/three-consecutive-odds/
 */
public class ThreeConsecutiveOdds {
    public static void main(String[] args) {
        // ...
    }
    public boolean threeConsecutiveOdds(int[] arr) {
        if (arr == null || arr.length < 3) {
            return false;
        }
        int vLen = arr.length;
        for (int i = 2; i < vLen; i++) {
            if (isOdd(arr[i])
                && isOdd(arr[i - 1])
                && isOdd(arr[i - 2])) {
                return true;
            }
        }
        return false;
    }
    private boolean isOdd(int n) {
        return n % 2 == 1;
    }
}

/* EOF */
