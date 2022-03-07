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
 * LeetCode 21. Merge Two Sorted Lists
 * https://leetcode.com/problems/merge-two-sorted-lists/
 */
class MergeTwoSortedLists {
public:
    ListNode* mergeTwoLists(ListNode* listA, ListNode* listB) {
        ListNode dummyHead = ListNode();
        ListNode* p = &dummyHead;
        ListNode* pA = listA;
        ListNode* pB = listB;
        while (pA != nullptr && pB != nullptr) {
            if (pA -> val < pB -> val) {
                p -> next = new ListNode(pA -> val);
                p = p -> next;
                pA = pA -> next;
            } else {
                p -> next = new ListNode(pB -> val);
                p = p -> next;
                pB = pB -> next;
            }
        }
        while (pA != nullptr) {
            p -> next = new ListNode(pA -> val);
            p = p -> next;
            pA = pA -> next;
        }
        while (pB != nullptr) {
            p -> next = new ListNode(pB -> val);
            p = p -> next;
            pB = pB -> next;
        }
        return dummyHead.next;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
