package io.zihengcat.leetcode.window;

/**
 * LeetCode 1423. Maximum Points You Can Obtain from Cards
 * https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/
 */
public class MaximumPointsYouCanObtainFromCards {
    public static void main(String[] args) {
        // ...
    }
    public int maxScore(int[] cardPoints, int k) {
        if (cardPoints == null || cardPoints.length < k || k < 0) {
            return 0;
        }
        int n = cardPoints.length;
        int windowSum = 0;
        for (int i = n - k; i < n; i++) {
            windowSum += cardPoints[i];
        }
        int maxSum = windowSum;
        for (int i = 0; i < k; i++) {
            windowSum -= cardPoints[n - k + i];
            windowSum += cardPoints[i];
            maxSum = windowSum > maxSum ? windowSum : maxSum;
        }
        return maxSum;
    }
}

/* EOF */
