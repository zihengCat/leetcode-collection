package io.zihengcat.leetcode.queue;

import java.util.Deque;
import java.util.LinkedList;

/**
 * LeetCode 1823. Find the Winner of the Circular Game
 * https://leetcode.com/problems/find-the-winner-of-the-circular-game/
 */
public class FindTheWinnerOfTheCircularGame {
    public static void main(String[] args) {
        // ...
    }
    public int findTheWinner(int n, int k) {
        if (n < 0 || k < 0) {
            return 0;
        }
        Deque<Integer> aDeque = new LinkedList<>();
        for (int i = 1; i <= n; i++) {
            aDeque.offer(i);
        }
        while (aDeque.size() > 1) {
            int d = k - 1;
            while (d > 0) {
                aDeque.offer(aDeque.poll());
                d--;
            }
            aDeque.poll();
        }
        return aDeque.poll();
    }
}

/* EOF */
