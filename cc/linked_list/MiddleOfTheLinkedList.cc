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
 * LeetCode 876. Middle of the Linked List
 * https://leetcode.com/problems/middle-of-the-linked-list
 */
class MiddleOfTheLinkedList {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* pFast = head;
        ListNode* pSlow = head;
        while (pFast != nullptr && pFast -> next != nullptr) {
            pFast = pFast -> next -> next;
            pSlow = pSlow -> next;
        }
        return pSlow;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
