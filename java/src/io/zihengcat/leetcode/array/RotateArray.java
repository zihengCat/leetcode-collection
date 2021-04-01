package io.zihengcat.leetcode.array;

import java.util.Deque;
import java.util.LinkedList;

/**
 * LeetCode 189. Rotate Array
 * https://leetcode.com/problems/rotate-array/
 */
public class RotateArray {
    public static void main(String[] args) {
        // ...
    }
    public void rotate(int[] nums, int k) {
        if (nums == null || nums.length == 0 || k < 0) {
            return;
        }
        // rotateWithDeque(nums, k);
        rotateWithReverse(nums, k);
    }
    private void rotateWithReverse(int[] nums, int k) {
        int len = nums.length;
        k = k % len;
        reverseArray(nums, 0, len - 1);
        reverseArray(nums, 0, k - 1);
        reverseArray(nums, k, len - 1);
    }
    private void reverseArray(int[] arr, int start, int end) {
        for (/* ... */; start < end; start++, end--) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }
    private void rotateWithDeque(int[] nums, int k) {
        k = k % nums.length;
        Deque<Integer> aDeque = new LinkedList<>();
        for (int i = 0; i < nums.length; i++) {
            aDeque.addLast(nums[i]);
        }
        for (int i = 0; i < k; i++) {
            aDeque.addFirst(aDeque.pollLast());
        }
        for (int i = 0; i < nums.length; i++) {
            nums[i] = aDeque.pollFirst();
        }
    }
}

/* EOF */
