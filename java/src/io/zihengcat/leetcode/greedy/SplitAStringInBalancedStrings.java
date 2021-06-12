package io.zihengcat.leetcode.greedy;

/**
 * LeetCode 1221. Split a String in Balanced Strings
 * https://leetcode.com/problems/split-a-string-in-balanced-strings/
 */
public class SplitAStringInBalancedStrings {
    public static void main(String[] args) {
        // ...
    }
    public int balancedStringSplit(String s) {
        if (s == null || s.length() == 0) {
            return 0;
        }
        int cnt = 0;
        int num = 0;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) == 'L') {
                num++;
            } else if (s.charAt(i) == 'R') {
                num--;
            }
            if (num == 0) {
                cnt++;
            }
        }
        return cnt;
    }
}

/* EOF */

