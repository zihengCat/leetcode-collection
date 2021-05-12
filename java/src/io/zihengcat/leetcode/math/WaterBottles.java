package io.zihengcat.leetcode.math;

/**
 * LeetCode 1518. Water Bottles
 * https://leetcode.com/problems/water-bottles/
 */
public class WaterBottles {
    public static void main(String[] args) {
        // ...
    }
    public int numWaterBottles(int numBottles, int numExchange) {
        int sumBottles = numBottles;
        int remainder = 0;
        while (numBottles >= numExchange) {
            remainder = numBottles % numExchange;
            numBottles /= numExchange;
            sumBottles += numBottles;
            numBottles += remainder;
        }
        return sumBottles;
    }
}

/* EOF */
