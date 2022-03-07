#include <iostream>

using namespace std;

/**
 * Definition for singly-linked list.
 */
class ListNode {
public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/**
 * LeetCode 86. Partition List
 * https://leetcode.com/problems/partition-list/
 */
class PartitionList {
public:
    ListNode* partition(ListNode* head, int x) {
        if (head == nullptr) {
            return head;
        }
        ListNode pLessHead = ListNode(0, nullptr);
        ListNode pGreaterHead = ListNode(0, nullptr);
        ListNode* pLess = &pLessHead;
        ListNode* pGreater = &pGreaterHead;
        ListNode* pCurrent = head;
        while (pCurrent != nullptr) {
            if (pCurrent -> val < x) {
                pLess = pLess -> next = pCurrent;
            } else {
                pGreater = pGreater -> next = pCurrent;
            }
            pCurrent = pCurrent -> next;
        }
        pGreater -> next = nullptr;
        pLess -> next = pGreaterHead.next;
        return pLessHead.next;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
