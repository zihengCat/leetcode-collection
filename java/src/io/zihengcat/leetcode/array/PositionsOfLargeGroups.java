package io.zihengcat.leetcode.array;

import java.util.List;
import java.util.ArrayList;

/**
 * LeetCode 830. Positions of Large Groups
 * https://leetcode.com/problems/positions-of-large-groups/
 */
public class PositionsOfLargeGroups {
    public static void main(String[] args) {
        // ...
    }
    public List<List<Integer>> largeGroupPositions(String s) {
        if (s == null || s.length() == 0) {
            return null;
        }
        List<List<Integer>> aList = new ArrayList<List<Integer>>();
        int sIdx = 0;
        char c = 0;
        int n = s.length();
        for (int i = 0; i < n; /* ... */) {
            sIdx = i;
            c = s.charAt(sIdx);
            while (i < n && s.charAt(i) == c) {
                i++;
            }
            if (i - sIdx >= 3) {
                List<Integer> arr = new ArrayList<Integer>();
                arr.add(sIdx);
                arr.add(i - 1);
                aList.add(arr);
            }
        }
        return aList;
    }
}

/* EOF */

