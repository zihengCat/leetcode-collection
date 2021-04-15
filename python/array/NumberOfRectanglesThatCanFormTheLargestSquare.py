#!/usr/bin/env python
# -*- coding: utf-8 -*-

from typing import List

# LeetCode 1725. Number Of Rectangles That Can Form The Largest Square
# https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square/
class NumberOfRectanglesThatCanFormTheLargestSquare:
    def countGoodRectangles(self, rectangles: List[List[int]]) -> int:
        maxLen: int = 0
        cnt: int = 0
        for rec in rectangles:
            cLen: int = min(rec[0], rec[1])
            if cLen > maxLen:
                maxLen = cLen
                cnt = 1
            elif cLen == maxLen:
                cnt += 1
        return cnt


if __name__ == "__main__":
    pass

# EOF
