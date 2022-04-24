#include <vector>

using namespace std;

struct Node {
    int val;
    Node *next;
    Node() : val(0), next(nullptr) {}
    Node(int x) : val(x), next(nullptr) {}
    Node(int x, Node *next) : val(x), next(next) {}
};

/**
 * LeetCode 707. Design Linked List
 * https://leetcode.com/problems/design-linked-list/
 */
class MyLinkedList {
private:
    Node* pHead;
    Node* pTail;
    int size;
public:
    MyLinkedList() {
        pHead = nullptr;
        pTail = nullptr;
        size = 0;
    }

    int get(int i) {
        if (i < 0 || i >= size) {
            return -1;
        }
        if (pHead == nullptr) {
            return -1;
        }
        Node* p = pHead;
        while (i > 0) {
            p = p -> next;
            i--;
        }
        return p -> val;
    }

    void addAtHead(int val) {
        Node* newNode = new Node(val);
        if (pHead == nullptr) {
            pHead = newNode;
            pTail = pHead;
        } else {
            newNode -> next = pHead;
            pHead = newNode;
        }
        size++;
    }

    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if (pTail == nullptr) {
            pTail = newNode;
            pHead = pTail;
            // ...
        } else {
            pTail -> next = newNode;
            pTail = newNode;
        }
        size++;
    }

    void addAtIndex(int i, int val) {
        if (i < 0 || i > size) {
            return;
        }
        Node* newNode = new Node(val);
        Node* p = pHead;
        while (p != nullptr && i > 0) {
            p = p -> next;
            i--;
        }
        newNode -> next = p -> next;
        p -> next = newNode;
        size++;
    }

    void deleteAtIndex(int i) {
        Node* p = pHead;
        while (p != nullptr && i > 0) {
            p = p -> next;
            i--;
        }
        p -> next = p -> next -> next;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
