package io.zihengcat.leetcode.others;

/**
 * LeetCode 1837. Sum of Digits in Base K
 * https://leetcode.com/problems/sum-of-digits-in-base-k/
 */
class SumOfDigitsInBaseK {
    public static void main(String[] args) {
        // ...
    }
    public int sumBase(int n, int k) {
        int digitsSum = 0;
        while (n > 0) {
            digitsSum += n % k;
            n /= k;
        }
        return digitsSum;
    }
}

/* EOF */
