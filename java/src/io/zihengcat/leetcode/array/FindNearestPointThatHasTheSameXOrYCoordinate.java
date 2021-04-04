package io.zihengcat.leetcode.array;

/**
 * LeetCode 1779. Find Nearest Point That Has the Same X or Y Coordinate
 * https://leetcode.com/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate/
 */
public class  FindNearestPointThatHasTheSameXOrYCoordinate {
    public static void main(String[] args) {
        // ...
    }
    public int nearestValidPoint(int x, int y, int[][] points) {
        if (points == null || points.length == 0) {
            return 0;
        }
        int[] pointT = new int[]{x, y, };
        int nearestIdx = -1;
        int minDis = Integer.MAX_VALUE;
        for (int i = 0; i < points.length; i++) {
            if (points[i][0] == x || points[i][1] == y) {
                int currentDis = calculateManhattanDistance(pointT, points[i]);
                if (currentDis < minDis) {
                    minDis = currentDis;
                    nearestIdx = i;
                }
            }
        }
        return nearestIdx;
    }
    private int calculateManhattanDistance(int[] pA, int[] pB) {
        return Math.abs(pA[0] - pB[0]) + Math.abs(pA[1] - pB[1]);
    }
}

/* EOF */
