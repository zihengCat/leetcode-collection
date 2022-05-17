#include <vector>

using namespace std;

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

/**
 * LeetCode 1379. Find a Corresponding Node of a Binary Tree in a Clone of That Tree
 * https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/
 */
class FindACorrespondingNodeOfABinaryTreeInACloneOfThatTree {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return findNode(cloned, target);
    }
private:
    TreeNode* findNode(TreeNode* t, TreeNode* n) {
        if (t == NULL || n == NULL) {
            return NULL;
        }
        if (t -> val == n -> val) {
            if (isSame(t, n)) {
                return t;
            }
        }
        TreeNode* l = findNode(t -> left, n);
        TreeNode* r = findNode(t -> right, n);
        if (l != NULL) {
            return l;
        }
        if (r != NULL) {
            return r;
        }
        return NULL;
    }
    bool isSame(TreeNode* a, TreeNode* b) {
        if (a == b) {
            return true;
        }
        if (a == NULL) {
            return b == NULL;
        }
        if (b == NULL) {
            return a == NULL;
        }
        if (a -> val != b -> val) {
            return false;
        }
        return isSame(a -> left, b -> left)
            && isSame(a -> right, b -> right);
    }
};


int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
