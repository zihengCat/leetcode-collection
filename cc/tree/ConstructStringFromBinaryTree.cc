#include <string>

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
 * LeetCode 606. Construct String from Binary Tree
 * https://leetcode.com/problems/construct-string-from-binary-tree/
 */
class ConstructStringFromBinaryTree {
public:
    string tree2str(TreeNode* root) {
        return preOrder(root);
    }
private:
    string preOrder(TreeNode* root) {
        if (root == nullptr) {
            return "";
        }

        string vStr;
        vStr.append(toString(root -> val));

        string lStr = preOrder(root -> left);
        string rStr = preOrder(root -> right);

        if (!lStr.empty() || !rStr.empty()) {
            vStr.append("(" + lStr + ")");
        }
        if (!rStr.empty()) {
            vStr.append("(" + rStr + ")");
        }

        return vStr;
    }

    string toString(int v) {
        if (v == 0) {
            return "0";
        }
        string s;
        bool isNegative = false;
        if (v < 0) {
            isNegative = true;
            v *= -1;
        }
        while (v > 0) {
            s.insert(0, 1, v % 10 + '0');
            v /= 10;
        }
        if (isNegative) {
            s.insert(0, 1, '-');
        }
        return s;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

