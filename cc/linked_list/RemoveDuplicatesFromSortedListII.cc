#include <unordered_set>

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
 * LeetCode 82. Remove Duplicates from Sorted List II
 * https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
 */
class RemoveDuplicatesFromSortedListII {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) {
            return head;
        }
        unordered_set<int> hSet;
        unordered_set<int> dupSet;
        ListNode* pHead = head;
        for (/* ... */; pHead != nullptr; pHead = pHead -> next) {
            if (hSet.find(pHead -> val) != hSet.end()) {
                dupSet.insert(pHead -> val);
            }
            hSet.insert(pHead -> val);
        }
        ListNode dummyHead = ListNode();
        ListNode* dpHead = &dummyHead;
        for (pHead = head; pHead != nullptr; pHead = pHead -> next) {
            if (dupSet.find(pHead -> val) != dupSet.end()) {
                continue;
            }
            dpHead -> next = new ListNode(pHead -> val, nullptr);
            dpHead = dpHead -> next;
        }
        return dummyHead.next;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
