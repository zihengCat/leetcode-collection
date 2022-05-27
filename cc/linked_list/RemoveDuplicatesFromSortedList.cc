#include <vector>
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
 * LeetCode 83. Remove Duplicates from Sorted List
 * https://leetcode.com/problems/remove-duplicates-from-sorted-list/
 */
class RemoveDuplicatesFromSortedList {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_set<int> s;
        ListNode dHead = ListNode(0, head);
        ListNode* curr = &dHead;
        for (ListNode* p = head; p != nullptr; p = p -> next) {
            if (s.find(p -> val) == s.end()) {
                curr -> next = p;
                curr = curr -> next;
                s.insert(p -> val);
            }
        }
        curr -> next = nullptr;
        return dHead.next;
    }
};

int main(int argc, char const *argv[]) {
    //...
    return 0;
}

/* EOF */
