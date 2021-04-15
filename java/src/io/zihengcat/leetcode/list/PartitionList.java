package io.zihengcat.leetcode.list;

/**
 * Definition for singly-linked list.
 */
class ListNode {
    public int val;
    public ListNode next;
    public ListNode() {}
    public ListNode(int val) {
        this.val = val;
    }
    public ListNode(int val, ListNode next) {
        this.val = val;
        this.next = next;
    }
}

/**
 * LeetCode 86. Partition List
 * https://leetcode.com/problems/partition-list/
 */
public class PartitionList {
    public static void main(String[] args) {
        // ...
    }
    public ListNode partition(ListNode head, int x) {
        if (head == null) {
            return head;
        }
        ListNode pLessHead = new ListNode(0, null);
        ListNode pGreaterHead = new ListNode(0, null);
        ListNode pLess = pLessHead;
        ListNode pGreater = pGreaterHead;
        ListNode pCurrent = head;
        while (pCurrent != null) {
            if (pCurrent.val < x) {
                pLess = pLess.next = pCurrent;
            } else {
                pGreater = pGreater.next = pCurrent;
            }
            pCurrent = pCurrent.next;
        }
        pGreater.next = null;
        pLess.next = pGreaterHead.next;
        return pLessHead.next;
    }
}

/* EOF */
