#include <vector>

using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/**
 * LeetCode 19. Remove Nth Node From End of List
 * https://leetcode.com/problems/remove-nth-node-from-end-of-list/
 */
class RemoveNthNodeFromEndOfList {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummyHead = ListNode(0, head);
        ListNode* fast = &dummyHead;
        ListNode* slow = &dummyHead;
        for (int i = 0; i < n + 1; i++) {
            fast = fast -> next;
        }
        while (fast != nullptr) {
            fast = fast -> next;
            slow = slow -> next;
        }
        // Remove Node
        ListNode* delNode = slow -> next;
        slow -> next = delNode -> next;
        delNode -> next = nullptr;
        return dummyHead.next;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
