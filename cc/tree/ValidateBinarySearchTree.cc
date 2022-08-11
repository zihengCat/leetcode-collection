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
 * LeetCode 98. Validate Binary Search Tree
 * https://leetcode.com/problems/validate-binary-search-tree/
 */
class ValidateBinarySearchTree {
public:
    bool isValidBST(TreeNode* root) {
        return isValidBSTWithRecursion(root, LONG_MIN, LONG_MAX);
    }
private:
    bool isValidBSTWithRecursion(TreeNode* root, long low, long high) {
        if (root == nullptr) {
            return true;
        }
        if (root -> val >= high || root -> val <= low) {
            return false;
        }
        return isValidBSTWithRecursion(root -> left, low, root -> val)
            && isValidBSTWithRecursion(root -> right, root -> val, high);
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
