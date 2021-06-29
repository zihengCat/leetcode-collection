package io.zihengcat.leetcode.hmap;

import java.util.Set;
import java.util.HashSet;

/**
 * LeetCode 409. Longest Palindrome
 * https://leetcode.com/problems/longest-palindrome/
 */
public class LongestPalindrome {
    public static void main(String[] args) {
        // ...
    }
    public int longestPalindrome(String s) {
        if (s == null) {
            return 0;
        }
        int cnt = 0;
        Set<Character> aSet = new HashSet<Character>();
        char c = 0;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            c = s.charAt(i);
            if (aSet.contains(c)) {
                cnt++;
                aSet.remove(c);
            } else {
                aSet.add(c);
            }
        }
        return aSet.size() > 0
            ? 2 * cnt + 1
            : 2 * cnt;
    }
}

/* EOF */

