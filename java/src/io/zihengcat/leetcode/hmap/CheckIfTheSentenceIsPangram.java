package io.zihengcat.leetcode.hmap;

/**
 * LeetCode 1832. Check if the Sentence Is Pangram
 * https://leetcode.com/problems/check-if-the-sentence-is-pangram/
 */
public class CheckIfTheSentenceIsPangram {
    public static void main(String[] args) {
        // ...
    }
    public  boolean checkIfPangram(String sentence) {
        if (sentence == null) {
            return false;
        }
        int alphabetMap[] = new int[26];
        int alphabetCount = 0;
        int sLen = sentence.length();
        int idx = 0;
        for (int i = 0; i < sLen; i++) {
            idx = sentence.charAt(i) - 'a';
            if (alphabetMap[idx] == 0) {
                alphabetMap[idx]++;
                alphabetCount++;
            }
        }
        return alphabetCount == 26;
    }
}

/* EOF */ 
