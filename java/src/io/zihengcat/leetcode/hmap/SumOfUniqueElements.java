package io.zihengcat.leetcode.hmap;

import java.util.HashMap;
import java.util.Map;

/**
 * LeetCode 1748. Sum of Unique Elements
 * https://leetcode.com/problems/sum-of-unique-elements/
 */
public class SumOfUniqueElements {
    public static void main(String[] args) {
        // ...
    }
    public int sumOfUnique(int[] nums) {
        if (nums == null || nums.length == 0) {
            return 0;
        }
        Map<Integer, Integer> aMap = new HashMap<>();
        for (int n : nums) {
            aMap.put(n, aMap.getOrDefault(n, 0) + 1);
        }
        int sum = 0;
        for (int k : aMap.keySet()) {
            if (aMap.get(k) == 1) {
                sum += k;
            }
        }
        return sum;
    }
}

/* EOF */
