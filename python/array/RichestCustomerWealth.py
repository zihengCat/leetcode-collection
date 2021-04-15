#!/usr/bin/env python
# -*- coding: utf-8 -*-

from typing import List

# LeetCode 1672. Richest Customer Wealth
# https://leetcode.com/problems/richest-customer-wealth/
class RichestCustomerWealth:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        maxVal: int = 0
        for account in accounts:
            val: int = 0
            for n in account:
                val += n
            if val > maxVal:
                maxVal = val
        return maxVal


if __name__ == "__main__":
    pass

# EOF
