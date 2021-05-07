package io.zihengcat.leetcode.search;

/**
 * LeetCode 852. Peak Index in a Mountain Array
 * https://leetcode.com/problems/peak-index-in-a-mountain-array/
 */
public class PeakIndexInAMountainArray {
    public static void main(String[] args) {
        // ...
    }
    public int peakIndexInMountainArray(int[] arr) {
        return binarySearch(arr, 0, arr.length - 1);
    }
    private int binarySearch(int[] arr, int left, int right) {
        int mid = 0;
        while (left < right) {
            mid = (left + right) / 2;
            if (arr[mid] > arr[mid + 1]) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
}

/* EOF */
