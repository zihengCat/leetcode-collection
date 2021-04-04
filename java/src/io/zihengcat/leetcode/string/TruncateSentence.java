package io.zihengcat.leetcode.string;

/**
 * LeetCode 1816. Truncate Sentence
 * https://leetcode.com/problems/truncate-sentence/
 */
public class TruncateSentence {
    public static void main(String[] args) {
        // ...
    }
    public String truncateSentence(String s, int k) {
        if (s == null || s.length() == 0 || k < 0) {
            return null;
        }
        char[] sArr = s.toCharArray();
        int sLen = s.length();
        int idx = sLen;
        int cnt = 0;
        for (int i = 0; i < sLen; i++) {
            if (sArr[i] == ' ') {
                cnt++;
            }
            if (cnt == k) {
                idx = i;
                break;
            }
        }
        StringBuilder sBuilder = new StringBuilder();
        sBuilder.append(sArr, 0, idx);
        return sBuilder.toString();
    }
}

/* EOF */
