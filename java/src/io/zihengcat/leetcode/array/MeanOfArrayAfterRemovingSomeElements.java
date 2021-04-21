package io.zihengcat.leetcode.array;

import java.util.Arrays;

/**
 * LeetCode 1619. Mean of Array After Removing Some Elements
 * https://leetcode.com/problems/mean-of-array-after-removing-some-elements/ 
 */
public class MeanOfArrayAfterRemovingSomeElements {
    public static void main(String[] args) {
        // ...
    }
    public double trimMean(int[] arr) {
        if (arr == null || arr.length == 0) {
            return 0;
        }
        Arrays.sort(arr);
        int vLen = arr.length;
        int sIdx = vLen * 5 / 100;
        int eIdx = vLen - sIdx;
        int vSum = 0;
        for (int i = sIdx; i < eIdx; i++) {
            vSum += arr[i];
        }
        return 1.0 * vSum / (eIdx - sIdx);
    }
}

/* EOF */
