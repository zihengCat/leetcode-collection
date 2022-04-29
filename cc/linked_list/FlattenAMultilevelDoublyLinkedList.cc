#include <vector>

using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};

/**
 * LeetCode 430. Flatten a Multilevel Doubly Linked List
 * https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/
 */
class FlattenAMultilevelDoublyLinkedList {
public:
    Node* flatten(Node* head) {

    }
private:
    Node* flat(Node* head, Node* rest) {
        if (head == nullptr) {
            return rest;
        }
        head -> next = flat(head -> child, flat(head -> next, rest));
        if (head -> next) {
            head -> next -> prev = head;
        }
        head -> child = nullptr;
        return head;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
