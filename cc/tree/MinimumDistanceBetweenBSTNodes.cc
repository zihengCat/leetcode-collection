#include <vector>

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

/**
 * LeetCode 783. Minimum Distance Between BST Nodes
 * https://leetcode.com/problems/minimum-distance-between-bst-nodes/
 */
class MinimumDistanceBetweenBSTNodes {
public:
    int minDiffInBST(TreeNode* root) {
        minDis = INT32_MAX;
        prev = -1;
        inOrder(root);
        return minDis;
    }
private:
    int minDis;
    int prev;
    void inOrder(TreeNode* root) {
        if (root == nullptr) {
            return;
        }
        inOrder(root -> left);
        if (prev != -1) {
            int cDis = doAbs(root -> val - prev);
            if (cDis < minDis) {
                minDis = cDis;
            }
        }
        prev = root -> val;
        inOrder(root -> right);
    }
    int doAbs(int n) {
        return n < 0 ? n * -1 : n;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

