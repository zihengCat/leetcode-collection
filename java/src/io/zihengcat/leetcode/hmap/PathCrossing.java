package io.zihengcat.leetcode.hmap;

import java.util.HashSet;
import java.util.Set;

/**
 * LeetCode 1496. Path Crossing
 * https://leetcode.com/problems/path-crossing/
 */
public class PathCrossing {
    public static void main(String[] args) {
        // ...
    }
    public boolean isPathCrossing(String path) {
        int x = 0;
        int y = 0;
        String separator = ":";
        Set<String> aSet = new HashSet<>();
        String k = x + separator + y;
        aSet.add(k);
        int sLen = path.length();
        for (int i = 0; i < sLen; i++) {
            switch (path.charAt(i)) {
            case 'N':
                y++;
                break;
            case 'S':
                y--;
                break;
            case 'E':
                x++;
                break;
            case 'W':
                x--;
                break;
            default:
                break;
            }
            k = x + separator + y;
            if (aSet.contains(k)) {
                return true;
            }
            aSet.add(k);
        }
        return false;
    }
}

/* EOF */
