/**
 * Definition for singly-linked list.
 */
class ListNode {
    val: number
    next: ListNode | null
    constructor(val?: number, next?: ListNode | null) {
        this.val = (val === undefined ? 0 : val);
        this.next = (next === undefined ? null : next);
    }
}

/**
 * LeetCode 86. Partition List
 * https://leetcode.com/problems/partition-list/
 */
function partition(head: ListNode | null, x: number): ListNode | null {
    if (head === null) {
        return head;
    }
    let pLessHead: ListNode = new ListNode(0, null);
    let pGreaterHead: ListNode = new ListNode(0, null);
    let pLess: ListNode = pLessHead;
    let pGreater: ListNode = pGreaterHead;
    let pCurrent: ListNode = head;
    while (pCurrent !== null) {
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
};

// EOF
