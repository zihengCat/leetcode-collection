#include <vector>

using namespace std;

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
 * LeetCode 653. Two Sum IV - Input is a BST
 * https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
 */
class TwoSumIVInputIsABST {
public:
    bool findTarget(TreeNode* root, int k) {
        return preOrder(root, root, k);
    }
private:
    bool preOrder(TreeNode* root, TreeNode* currentNode, int k) {
        if (root == nullptr || currentNode == nullptr) {
            return false;
        }
        if (searchNum(root, currentNode, k - currentNode -> val)) {
            return true;
        }
        return preOrder(root, currentNode -> left, k)
            || preOrder(root, currentNode -> right, k);
    }
    bool searchNum(TreeNode* root, TreeNode* currentNode, int n) {
        if (root == nullptr || currentNode == nullptr) {
            return false;
        }
        TreeNode* node = root; // Find missing number from root node
        while (node != nullptr) {
            if (node -> val > n) {
                node = node -> left;
            } else if (node -> val < n) {
                node = node -> right;
            } else if (node -> val == n) {
                return node != currentNode; // Not current node itself
            }
        }
        return false;
    }
};

int main(int argc, char const *argv[]) {
    // ..
    return 0;
}

/* EOF */
