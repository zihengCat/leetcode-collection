package io.zihengcat.leetcode.dp;

/**
 * LeetCode 583. Delete Operation for Two Strings
 * https://leetcode.com/problems/delete-operation-for-two-strings/
 */
public class DeleteOperationForTwoStrings {
    public static void main(String[] args) {
        // ...
    }
    public int minDistance(String word1, String word2) {
        // return minDistanceWithBruteForce(word1, 0, word2, 0);

        // int[][] memo = new int[500][500];
        // for (int[] row : memo) {
        //     for (int i = 0; i < row.length; i++) {
        //         row[i] = -1;
        //     }
        // }
        // return minDistanceWithMemo(word1, 0, word2, 0, memo);

        return minDistanceWithDP(word1, 0, word2, 0);
    }
    private int minDistanceWithBruteForce(String word1, int i1, String word2, int i2) {
        int w1Len = word1.length();
        int w2Len = word2.length();
        if (i1 == w1Len) {
            return w2Len - i2;
        }
        if (i2 == w2Len) {
            return w1Len - i1;
        }
        return word1.charAt(i1) == word2.charAt(i2) ?
            minDistanceWithBruteForce(word1, 1 + i1, word2, 1 + i2) :
            1 + Math.min(
                minDistanceWithBruteForce(word1, 1 + i1, word2, i2),
                minDistanceWithBruteForce(word1, i1, word2, 1 + i2)
            );
    }
    private int minDistanceWithMemo(String word1, int i1, String word2, int i2, int[][] memo) {
        int w1Len = word1.length();
        int w2Len = word2.length();
        if (i1 == w1Len) {
            return w2Len - i2;
        }
        if (i2 == w2Len) {
            return w1Len - i1;
        }
        if (memo[i1][i2] != -1) {
            return memo[i1][i2];
        }
        memo[i1][i2] = word1.charAt(i1) == word2.charAt(i2) ?
            minDistanceWithMemo(word1, 1 + i1, word2, 1 + i2, memo) :
            1 + Math.min(
                minDistanceWithMemo(word1, 1 + i1, word2, i2, memo),
                minDistanceWithMemo(word1, i1, word2, 1 + i2, memo)
            );
        return memo[i1][i2];
    }
    private int minDistanceWithDP(String word1, int i1, String word2, int i2) {
        int w1Len = word1.length();
        int w2Len = word2.length();
        int[][] dp = new int[w1Len + 1][w2Len + 1];
        for (int i = 0; i <= w1Len; i++) {
            for (int j = 0; j <= w2Len; j++) {
                if (i == 0 || j == 0) {
                    dp[i][j] = i + j;
                } else {
                    dp[i][j] = word1.charAt(i - 1) == word2.charAt(j - 1) ?
                        dp[i - 1][j - 1] :
                        1 + Math.min(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[w1Len][w2Len];
    }
}

/* EOF */
