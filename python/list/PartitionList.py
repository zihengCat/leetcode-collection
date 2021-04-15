#!/usr/bin/env python
# -*- coding: utf-8 -*-

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val: int = val
        self.next: ListNode = next


# LeetCode 86. Partition List
# https://leetcode.com/problems/partition-list/
class PartitionList:
    def partition(self, head: ListNode, x: int) -> ListNode:
        if head is None:
            return head
        pLessHead: ListNode = ListNode(0, None)
        pGreaterHead: ListNode = ListNode(0, None)
        pLess: ListNode = pLessHead
        pGreater: ListNode = pGreaterHead
        pCurrent = head
        while pCurrent is not None:
            if pCurrent.val < x:
                pLess.next = pCurrent
                pLess = pLess.next
            else:
                pGreater.next = pCurrent
                pGreater = pGreater.next
            pCurrent = pCurrent.next
        pGreater.next = None
        pLess.next = pGreaterHead.next
        return pLessHead.next


if __name__ == "__main__":
    pass

# EOF
