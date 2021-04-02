#include <string>

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
 * LeetCode 234. Palindrome Linked List
 * https://leetcode.com/problems/palindrome-linked-list/
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr) {
            return false;
        }
        return isPalindromeWithPointer(head);
    }
private:
    bool isPalindromeWithPointer(ListNode* head) {
        ListNode *fastPtr = head;
        ListNode *slowPtr = head;
        ListNode *headPtr = head;
        while (fastPtr != nullptr && fastPtr -> next != nullptr) {
            fastPtr = fastPtr -> next -> next;
            slowPtr = slowPtr -> next;
        }
        slowPtr = reverseLinkedList(slowPtr);
        while (slowPtr != nullptr) {
            if (slowPtr -> val != headPtr -> val) {
                return false;
            }
            slowPtr = slowPtr -> next;
            headPtr = headPtr -> next;
        }
        return true;
    }
    ListNode* reverseLinkedList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        while (head != nullptr) {
            next = head -> next;
            head -> next = prev;
            prev = head; 
            head = next;
        }
        return prev;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
