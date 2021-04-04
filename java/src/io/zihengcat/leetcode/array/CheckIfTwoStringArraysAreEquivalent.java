package io.zihengcat.leetcode.array;

/**
 * LeetCode 1662. Check If Two String Arrays are Equivalent
 * https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/
 */
public class CheckIfTwoStringArraysAreEquivalent {
    public static void main(String[] args) {
        // ...
    }
    public boolean arrayStringsAreEqual(String[] word1, String[] word2) {
        if (word1 == null || word2 == null) {
            return false;
        }
        StringBuilder s1 = new StringBuilder();
        StringBuilder s2 = new StringBuilder();
        for (int i = 0; i < word1.length; i++) {
            s1.append(word1[i]);
        }
        for (int i = 0; i < word2.length; i++) {
            s2.append(word2[i]);
        }
        return s1.toString().equals(s2.toString());
    }
}

/* EOF */
