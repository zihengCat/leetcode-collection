package io.zihengcat.leetcode.string;

import java.util.Set;
import java.util.HashSet;

/**
 * LeetCode 1704. Determine if String Halves Are Alike
 * https://leetcode.com/problems/determine-if-string-halves-are-alike/
 */
public class DetermineIfStringHalvesAreAlike {
    public static void main(String[] args) {
        // ...
    }
    private static char[] vowels = {
        'a', 'e', 'i', 'o', 'u',
        'A', 'E', 'I', 'O', 'U',
    };
    public boolean halvesAreAlike(String s) {
        if (s == null || s.length() % 2 != 0) {
            return false;
        }
        Set<Character> vowelsSet = new HashSet<>();
        for (char c : vowels) {
            vowelsSet.add(c);
        }
        int aCnt = 0;
        int bCnt = 0;
        int sLen = s.length();
        int sHalf = sLen / 2;
        for (int pA = 0, pB = sHalf;
            pA < sHalf && pB < sLen;
            pA++, pB++
        ) {
            if (vowelsSet.contains(s.charAt(pA))) {
                aCnt++;
            }
            if (vowelsSet.contains(s.charAt(pB))) {
                bCnt++;
            }
        }
        return aCnt == bCnt;
    }
}


/* EOF */
