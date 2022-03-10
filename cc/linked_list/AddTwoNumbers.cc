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
 * LeetCode 2. Add Two Numbers
 * https://leetcode.com/problems/add-two-numbers/
 */
class AddTwoNumbers {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummyHead = ListNode();
        ListNode* p = &dummyHead;
        ListNode* pA = l1;
        ListNode* pB = l2;
        int carryNum = 0;
        int sumNum = 0;
        while (pA != nullptr && pB != nullptr) {
            sumNum = pA -> val + pB -> val + carryNum;
            carryNum = sumNum / 10;
            sumNum = sumNum % 10;
            p -> next = new ListNode(sumNum);
            p = p -> next;
            pA = pA -> next;
            pB = pB -> next;
        }
        while (pA != nullptr) {
            sumNum = pA -> val + 0 + carryNum;
            carryNum = sumNum / 10;
            sumNum = sumNum % 10;
            p -> next = new ListNode(sumNum);
            p = p -> next;
            pA = pA -> next;
        }
        while (pB != nullptr) {
            sumNum = pB -> val + 0 + carryNum;
            carryNum = sumNum / 10;
            sumNum = sumNum % 10;
            p -> next = new ListNode(sumNum);
            p = p -> next;
            pB = pB -> next;
        }
        if (carryNum != 0) {
            p -> next = new ListNode(carryNum);
            p = p -> next;
            carryNum = 0;
        }
        return dummyHead.next;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
