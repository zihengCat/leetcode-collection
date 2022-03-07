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
 * LeetCode 203. Remove Linked List Elements
 * https://leetcode.com/problems/remove-linked-list-elements/
 */
class RemoveLinkedListElements {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummyHead = ListNode(0, head);
        ListNode *pHead = &dummyHead;
        ListNode *pNext = nullptr;
        while (pHead != nullptr && pHead -> next != nullptr) {
            pNext = pHead -> next;
            if (pNext -> val == val) {
                pHead -> next = pNext -> next;
            } else {
                pHead = pHead -> next;
            }
        }
        return dummyHead.next;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
