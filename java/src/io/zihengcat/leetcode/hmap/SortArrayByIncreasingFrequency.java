package io.zihengcat.leetcode.hmap;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * LeetCode 1636. Sort Array by Increasing Frequency
 * https://leetcode.com/problems/sort-array-by-increasing-frequency/
 */
public class SortArrayByIncreasingFrequency {
    public static void main(String[] args) {
        // ...
    }
    public int[] frequencySort(int[] nums) {
        if (nums == null || nums.length == 0) {
            return nums;
        }
        int[] rArr = new int[nums.length];
        Map<Integer, Integer> aMap = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            aMap.put(nums[i], 1 + aMap.getOrDefault(nums[i], 0));
        }
        List<Map.Entry<Integer, Integer>> aList = new ArrayList<>(
            aMap.entrySet()
        );
        Collections.sort(aList, new Comparator<Map.Entry<Integer, Integer>>() {
            @Override
            public int compare(Map.Entry<Integer, Integer> o1, Map.Entry<Integer, Integer> o2) {
                if (o1.getValue().equals(o2.getValue())) {
                    // decreasing order
                    return o2.getKey() - o1.getKey();
                }
                // increasing order
                return o1.getValue() - o2.getValue();
            }
        });
        // Fill array
        int idx = 0;
        for (int i = 0; i < aList.size(); i++) {
            Map.Entry<Integer, Integer> e = aList.get(i);
            for (int j = 0; j < e.getValue(); j++) {
                rArr[idx] = e.getKey();
                idx++;
            }
        }
        return rArr;
    }
}

/* EOF */
