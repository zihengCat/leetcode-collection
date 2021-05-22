package io.zihengcat.leetcode.search;

/**
 * LeetCode 821. Shortest Distance to a Character
 * https://leetcode.com/problems/shortest-distance-to-a-character/
 */
public class ShortestDistanceToACharacter {
    public static void main(String[] args) {
        // ...
    }
    public int[] shortestToChar(String s, char c) {
        if (s == null) {
            return null;
        }
        int n = s.length();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = Math.min(findLeft(s, c, i), findRight(s, c, i));
        }
        return arr;
    }
    private int findLeft(String s, char c, int idx) {
        int dis = Integer.MAX_VALUE;
        for (int i = idx; i >= 0; i--) {
            if (s.charAt(i) == c) {
                dis = idx - i;
                break;
            }
        }
        return dis;
    }
    private int findRight(String s, char c, int idx) {
        int dis = Integer.MAX_VALUE;
        int n = s.length();
        for (int i = idx; i < n; i++) {
            if (s.charAt(i) == c) {
                dis = i - idx;
                break;
            }
        }
        return dis;
    }
}

/* EOF */
