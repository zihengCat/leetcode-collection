package io.zihengcat.leetcode.array;

/**
 * LeetCode 1732. Find the Highest Altitude
 * https://leetcode.com/problems/find-the-highest-altitude/
 */
public class FindTheHighestAltitude {
    public static void main(String[] args) {
        // ...
    }
    public int largestAltitude(int[] gain) {
        if (gain == null || gain.length == 0) {
            return 0;
        }
        int arrLen = gain.length;
        int current = 0;
        int highest = 0;
        for (int i = 0; i < arrLen; i++) {
            current += gain[i];
            if (current > highest) {
                highest = current;
            }
        }
        return highest;
    }
}

/* EOF */
