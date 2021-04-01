package io.zihengcat.leetcode.array;

import java.util.Arrays;
import java.util.LinkedList;

public class CheckIfArrayIsSortedAndRotated {
    public static void main(String[] args) {
        // ...
    }
    public boolean check(int[] nums) {
        if (nums == null || nums.length == 0) {
            return false;
        }
        // Sort Array
        int[] sortedArr = new int[nums.length];
        System.arraycopy(nums, 0, sortedArr, 0, nums.length);
        Arrays.sort(sortedArr);

        // Deque for rotate
        LinkedList<Integer> aQueue = new LinkedList<>();
        for (int i = 0; i < sortedArr.length; i++) {
            aQueue.add(Integer.valueOf(sortedArr[i]));
        }

        // Rotate and compare
        for (int i = 0; i < nums.length; i++) {
            if (allEquals(nums, aQueue)) {
                return true;
            }
            // Do rotate
            aQueue.addLast(aQueue.pollFirst());
        }
        return false;
    }
    private boolean allEquals(int[] a, LinkedList<Integer> q) {
        if (a.length != q.size()) {
            return false;
        }
        for (int i = 0; i < a.length; i++) {
            if (a[i] != q.get(i)) {
                return false;
            }
        }
        return true;
    }
}

/* EOF */
