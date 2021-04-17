#!/usr/bin/env python
# -*- coding: utf-8 -*-

from typing import List

# LeetCode 1646. Get Maximum in Generated Array
# https://leetcode.com/problems/get-maximum-in-generated-array/
class GetMaximumInGeneratedArray:
    def getMaximumGenerated(self, n: int) -> int:
        if n < 0:
            return 0
        if n == 0 or n == 1:
            return n
        nums: List[int] = [0] * (n + 1)
        nums[0] = 0
        nums[1] = 1
        vLen: int = n // 2
        vMax: int = -1
        for i in range(1, vLen + 1):
            if 2 * i <= n:
                nums[2 * i] = nums[i]
                vMax = max(vMax, nums[2 * i])
            if 2 * i + 1 <= n:
                nums[2 * i + 1] = nums[i] + nums[i + 1]
                vMax = max(vMax, nums[2 * i + 1])
        return vMax


if __name__ == "__main__":
    pass

# EOF
