package io.zihengcat.leetcode.array;

/**
 * LeetCode 1460. Make Two Arrays Equal by Reversing Sub-arrays
 * https://leetcode.com/problems/make-two-arrays-equal-by-reversing-sub-arrays/
 */
public class MakeTwoArraysEqualByReversingSubArrays {
    public static void main(String[] args) {
        // ...
    }
    public boolean canBeEqual(int[] target, int[] arr) {
        if (target == null || arr == null || target.length != arr.length) {
            return false;
        }
        quickSort(target, 0, target.length - 1);
        quickSort(arr, 0, arr.length - 1);
        return isEqual(target, arr);
    }
    private boolean isEqual(int[] a, int[] b) {
        if (a.length != b.length) {
            return false;
        }
        int n = a.length;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }
    private void quickSort(int[] arr, int left, int right) {
        if (left >= right) {
            return;
        }
        int i = doPartition(arr, left, right);
        quickSort(arr, left, i - 1);
        quickSort(arr, i + 1, right);
    }
    private int doPartition(int[] arr, int left, int right) {
        int pivot = arr[left];
        int pLeft = left;
        int pRight = right;
        for (/* ... */; pLeft < pRight; /* ... */) {
            while (pLeft < pRight && arr[pRight] > pivot) {
                pRight--;
            }
            while (pLeft < pRight && arr[pLeft] <= pivot) {
                pLeft++;
            }
            doSwap(arr, pLeft, pRight);
        }
        doSwap(arr, left, pLeft);
        return pLeft;
    }
    private void doSwap(int[] arr, int i, int j) {
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
}

/* EOF */

