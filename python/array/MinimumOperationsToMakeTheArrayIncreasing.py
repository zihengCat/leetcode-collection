#!/usr/bin/env python
# -*- coding: utf-8 -*-

from typing import List

# LeetCode 1827. Minimum Operations to Make the Array Increasing
# https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/
class MinimumOperationsToMakeTheArrayIncreasing:
    def minOperations(self, nums: List[int]) -> int:
        if (nums is None) or (len(nums) < 2):
            return 0
        opCnt: int = 0
        prevNum: int = nums[0]
        for i in range(1, len(nums)):
            if nums[i] <= prevNum:
                prevNum += 1
                opCnt += prevNum - nums[i]
            else:
                prevNum = nums[i]
        return opCnt


if __name__ == "__main__":
    pass

# EOF
