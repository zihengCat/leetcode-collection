package io.zihengcat.leetcode.hmap;

import java.util.HashSet;
import java.util.Set;

/**
 * LeetCode 1684. Count the Number of Consistent Strings
 * https://leetcode.com/problems/count-the-number-of-consistent-strings/
 */
public class CountTheNumberOfConsistentStrings {
    public static void main(String[] args) {
        // ...
    }
    public int countConsistentStrings(String allowed, String[] words) {
        if (allowed == null || words == null || words.length == 0) {
            return 0;
        }
        int cnt = 0;
        Set<Character> aSet = new HashSet<>();
        for (int i = 0; i < allowed.length(); i++) {
            aSet.add(allowed.charAt(i));
        }
        for (int i = 0; i < words.length; i++) {
            if (allCharactersAppears(aSet, words[i])) {
                cnt++;
            }
        }
        return cnt;
    }
    private boolean allCharactersAppears(Set<Character> aSet, String word) {
        for (int i = 0; i < word.length(); i++) {
            if (!aSet.contains(word.charAt(i))) {
                return false;
            }
        }
        return true;
    }
}

/* EOF */
