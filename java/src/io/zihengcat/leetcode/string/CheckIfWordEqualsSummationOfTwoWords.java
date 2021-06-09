package io.zihengcat.leetcode.string;

/**
 * LeetCode 1880. Check if Word Equals Summation of Two Words
 * https://leetcode.com/problems/check-if-word-equals-summation-of-two-words/
 */
public class CheckIfWordEqualsSummationOfTwoWords {
    public static void main(String[] args) {
        // ...
    }
    public boolean isSumEqual(String firstWord, String secondWord, String targetWord) {
        return parseWord(firstWord) + parseWord(secondWord) == parseWord(targetWord);
    }
    private int parseWord(String s) {
        if (s == null) {
            return 0;
        }
        int r = 0;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            r = r * 10 + s.charAt(i) - 'a';
        }
        return r;
    }
}

/* EOF */
