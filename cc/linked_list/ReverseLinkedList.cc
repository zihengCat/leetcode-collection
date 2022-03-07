#include <algorithm>

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
 * LeetCode 206. Reverse Linked List
 * https://leetcode.com/problems/reverse-linked-list/
 */
class ReverseLinkedList {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) {
            return head;
        }
        // return reverseListWithIteration(head);
        return reverseListWithRecursion(head, nullptr);
    }
private:
    ListNode* reverseListWithRecursion(ListNode* head, ListNode* reversedList) {
        if (head == nullptr) {
            return reversedList;
        }
        ListNode* nextList = head -> next;
        head -> next = reversedList;
        return reverseListWithRecursion(nextList, head);
    }
    ListNode* reverseListWithIteration(ListNode* head) {
        ListNode* currNode = head;
        ListNode* prevNode = nullptr;
        ListNode* nextNode = head -> next;
        while (currNode != nullptr) {
            nextNode = currNode -> next;
            currNode -> next = prevNode;
            prevNode = currNode;
            currNode = nextNode;
        }
        return prevNode;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
