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
 * LeetCode 129. Sum Root to Leaf Numbers
 * https://leetcode.com/problems/sum-root-to-leaf-numbers/
 */
class SumRootToLeafNumbers {
public:
    int sumNumbers(TreeNode* root) {
        return dfs(root, 0);
    }
private:
    int dfs(TreeNode* root, int n) {
        if (root == nullptr) {
            return 0;
        }
        n = n * 10 + root -> val;
        if (root -> left == nullptr
            && root -> right == nullptr) {
            return n;
        }
        return dfs(root -> left, n) + dfs(root -> right, n);
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
