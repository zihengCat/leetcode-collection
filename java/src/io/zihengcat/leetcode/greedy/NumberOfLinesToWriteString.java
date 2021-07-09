package io.zihengcat.leetcode.greedy;

/**
 * LeetCode 806. Number of Lines To Write String
 * https://leetcode.com/problems/number-of-lines-to-write-string/
 */
public class NumberOfLinesToWriteString {
    public static void main(String[] args) {
        // ...
    }
    public int[] numberOfLines(int[] widths, String s) {
        if (widths == null || s == null) {
            return null;
        }
        int lineCnt = 0;
        int lastLinePixels = 0;
        int n = s.length();
        for (int i = 0; i < n; /* ... */ ) {
            int cLinePixels = 0;
            while (i < n && cLinePixels + widths[s.charAt(i) - 'a'] <= 100) {
                cLinePixels += widths[s.charAt(i) - 'a'];
                i++;
            }
            lineCnt++;
            lastLinePixels = cLinePixels;
        }
        return new int[] {
            lineCnt,
            lastLinePixels
        };
    }
}

/* EOF */
