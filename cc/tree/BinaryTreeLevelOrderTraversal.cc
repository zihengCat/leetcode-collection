#include <vector>
#include <queue>

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
 * LeetCode 102. Binary Tree Level Order Traversal
 * https://leetcode.com/problems/binary-tree-level-order-traversal/
 */
class BinaryTreeLevelOrderTraversal {
public:
    vector<vector<int> > levelOrder(TreeNode* root) {
        vector<vector<int> > v;
        if (root == nullptr) {
            return v;
        }
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            vector<int> vv;
            int qSize = q.size();
            for (int i = 0; i < qSize; i++) {
                TreeNode* n = q.front();
                q.pop();
                vv.push_back(n -> val);
                if (n -> left != nullptr) {
                    q.push(n -> left);
                }
                if (n -> right != nullptr) {
                    q.push(n -> right);
                }
            }
            v.push_back(vv);
        }
        return v;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
