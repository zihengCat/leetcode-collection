package io.zihengcat.leetcode.hmap;

import java.util.Map;
import java.util.HashMap;

/**
 * LeetCode 219. Contains Duplicate II
 * https://leetcode.com/problems/contains-duplicate-ii/
 */
public class ContainsDuplicateII {
    public static void main(String[] args) {
        // ...
    }
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        if (nums == null) {
            return false;
        }
        Map<Integer, Integer> hMap = new HashMap<>();
        Integer nIdx = null;
        for (int i = 0; i < nums.length; i++) {
            nIdx = hMap.get(nums[i]);
            if (nIdx != null) {
                if (i - nIdx.intValue() <= k) {
                    return true;
                }
            }
            hMap.put(nums[i], i);
        }
        return false;
    }
}

/* EOF */
