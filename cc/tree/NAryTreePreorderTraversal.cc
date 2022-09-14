#include <vector>

using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

/**
 * LeetCode 589. N-ary Tree Preorder Traversal
 * https://leetcode.com/problems/n-ary-tree-preorder-traversal/
 */
class NAryTreePreorderTraversal {
public:
    vector<int> preorder(Node* root) {
        vector<int> v;
        traversal(v, root);
        return v;
    }
private:
    void traversal(vector<int>& v, Node* root) {
        if (root == nullptr) {
            return;
        }
        v.push_back(root -> val);
        int n = root -> children.size();
        for (int i = 0; i < n; i++) {
            traversal(v, root -> children[i]);
        }
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
