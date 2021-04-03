package io.zihengcat.leetcode.array;

/**
 * LeetCode 1812. Determine Color of a Chessboard Square
 * https://leetcode.com/problems/determine-color-of-a-chessboard-square/
 */
public class DetermineColorOfAChessboardSquare {
    public static void main(String[] args) {
        // ...
    }
    public boolean squareIsWhite(String coordinates) {
        if (coordinates == null || coordinates.length() != 2) {
            return false;
        }
        return ((coordinates.charAt(0) - 'a') + (coordinates.charAt(1) - '1')) % 2 == 1;
    }
}

/* EOF */
