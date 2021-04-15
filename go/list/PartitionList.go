package main

/**
 * Definition for singly-linked list.
 */
type ListNode struct {
	Val int
	Next *ListNode
}

/**
 * LeetCode 86. Partition List
 * https://leetcode.com/problems/partition-list/
 */
func partition(head *ListNode, x int) *ListNode {
	if head == nil {
		return head
	}
	var (
		pLessHead ListNode = ListNode{Val: 0, Next: nil}
		pGreaterHead ListNode = ListNode{Val: 0, Next: nil}
		pLess *ListNode = &pLessHead
		pGreater *ListNode = &pGreaterHead
		pCurrent *ListNode = head
	)
	for pCurrent != nil {
		if pCurrent.Val < x {
			pLess.Next = pCurrent
			pLess = pLess.Next
		} else {
			pGreater.Next = pCurrent
			pGreater = pGreater.Next
		}
		pCurrent = pCurrent.Next
	}
	pGreater.Next = nil
	pLess.Next = pGreaterHead.Next
	return pLessHead.Next
}

func main() {
	// ...
}

// EOF
