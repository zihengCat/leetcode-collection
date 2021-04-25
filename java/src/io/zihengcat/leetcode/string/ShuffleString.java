package io.zihengcat.leetcode.string;

/**
 * LeetCode 1528. Shuffle String
 * https://leetcode.com/problems/shuffle-string/
 */
public class ShuffleString {
    public static void main(String[] args) {
        // ...
    }
    public String restoreString(String s, int[] indices) {
        if (s == null || indices == null || s.length() != indices.length) {
            return null;
        }
        int vLen = s.length();
        char[] shuffledStr = new char[vLen];
        for (int i = 0; i < vLen; i++) {
            shuffledStr[indices[i]] = s.charAt(i);
        }
        return String.valueOf(shuffledStr);
    }
}

/* EOF */
