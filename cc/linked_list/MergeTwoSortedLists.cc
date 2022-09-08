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
        ListNode dHead = ListNode();
        ListNode* p = &dHead;
        ListNode* pA = listA;
        ListNode* pB = listB;
        while (pA != nullptr && pB != nullptr) {
            if (pA -> val < pB -> val) {
                p -> next = pA;
                p = p -> next;
                pA = pA -> next;
            } else {
                p -> next = pB;
                p = p -> next;
                pB = pB -> next;
            }
        }
        while (pA != nullptr) {
            p -> next = pA;
            p = p -> next;
            pA = pA -> next;
        }
        while (pB != nullptr) {
            p -> next = pB;
            p = p -> next;
            pB = pB -> next;
        }
        return dHead.next;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
