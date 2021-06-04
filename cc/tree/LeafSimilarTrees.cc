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
 * LeetCode 872. Leaf-Similar Trees
 * https://leetcode.com/problems/leaf-similar-trees/
 */
class LeafSimilarTrees {
public:
    bool leafSimilar(TreeNode* rootA, TreeNode* rootB) {
        vector<int> arrA;
        vector<int> arrB;
        inOrder(rootA, arrA);
        inOrder(rootB, arrB);
        return arrA == arrB;
    }
private:
    void inOrder(TreeNode* root, vector<int>& arr) {
        if (root == nullptr) {
            return;
        }
        if (root -> left == nullptr && root -> right == nullptr) {
            arr.push_back(root -> val);
        }
        inOrder(root -> left, arr);
        // ...
        inOrder(root -> right, arr);
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
