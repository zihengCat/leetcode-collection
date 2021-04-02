package io.zihengcat.leetcode.list;

import java.util.Deque;
import java.util.LinkedList;

/**
 * Definition for singly-linked list.
 */
class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) {
        this.val = val;
    }
    ListNode(int val, ListNode next) {
        this.val = val;
        this.next = next;
    }
}

/**
 * LeetCode 234. Palindrome Linked List
 * https://leetcode.com/problems/palindrome-linked-list/
 */
public class PalindromeLinkedList {
    public static void main(String[] args) {
        // ...
    }
    public boolean isPalindrome(ListNode head) {
        if (head == null) {
            return false;
        }
        // return isPalindromeWithDeque(head);
        return isPalindromeWithPointer(head);
    }
    private boolean isPalindromeWithPointer(ListNode head) {
        ListNode headPtr = head;
        ListNode fastPtr = head;
        ListNode slowPtr = head;
        while (fastPtr != null && fastPtr.next != null) {
            slowPtr = slowPtr.next;
            fastPtr = fastPtr.next.next;
        }
        slowPtr = reverseLinkedList(slowPtr);
        for (/* ... */;
            slowPtr != null;
            headPtr = headPtr.next, slowPtr = slowPtr.next) {
            if (headPtr.val != slowPtr.val) {
                return false;
            }
        }
        return true;
    }
    private ListNode reverseLinkedList(ListNode head) {
        ListNode prev = null;
        ListNode next = null;
        while (head != null) {
            next = head.next;
            head.next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
    private boolean isPalindromeWithDeque(ListNode head) {
        Deque<Integer> aDeque = new LinkedList<>();
        for (/* ... */; head != null; head = head.next) {
            aDeque.addLast(head.val);
        }
        int len = aDeque.size();
        int[] arr = new int[len];
        for (int i = 0; i < len; i++) {
            arr[i] = aDeque.pollFirst();
        }
        for (int start = 0, end = len - 1;
            start < end;
            start++, end--) {
            if (arr[start] != arr[end]) {
                return false;
            }
        }
        return true;
    }
}

/* EOF */
