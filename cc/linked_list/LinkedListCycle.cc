#include <vector>

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

/**
 * LeetCode 141. Linked List Cycle
 * https://leetcode.com/problems/linked-list-cycle/
 */
class LinkedListCycle {
public:
    bool hasCycle(ListNode *head) {
        ListNode* pFast = head;
        ListNode* pSlow = head;
        while (pFast != NULL && pFast -> next != NULL) {
            pSlow = pSlow -> next;
            pFast = pFast -> next -> next;
            if (pFast == pSlow) {
                return true;
            }
        }
        return false;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
