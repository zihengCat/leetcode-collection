#include <deque>

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
 * LeetCode 234. Palindrome Linked List
 * https://leetcode.com/problems/palindrome-linked-list/
 */
class PalindromeLinkedList {
public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr) {
            return false;
        }
        deque<int> q;
        for (ListNode* p = head; p != nullptr; p = p -> next) {
            q.push_back(p -> val);
        }
        while (q.size() >= 2) {
            if (q.front() != q.back()) {
                return false;
            }
            q.pop_front();
            q.pop_back();
        }
        return true;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
