package io.zihengcat.leetcode.window;

/**
 * LeetCode 1876. Substrings of Size Three with Distinct Characters
 * https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/
 */
public class SubstringsOfSizeThreeWithDistinctCharacters {
    public static void main(String[] args) {
        // ...
    }
    public int countGoodSubstrings(String s) {
        if (s.length() < 3) {
            return 0;
        }
        int cnt = 0;
        char x, y, z;
        int n = s.length();
        for (int wStart = 0, wEnd = 2;
            wEnd < n;
            wStart++, wEnd++
        ) {
            x = s.charAt(wStart);
            y = s.charAt(wStart + 1);
            z = s.charAt(wEnd);
            if (x != y && x != z && y != z) {
                cnt++;
            }
        }
        return cnt;
    }
}

/* EOF */
