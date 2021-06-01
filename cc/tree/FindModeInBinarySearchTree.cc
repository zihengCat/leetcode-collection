#include <vector>
#include <unordered_map>

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
 * LeetCode 501. Find Mode in Binary Search Tree
 * https://leetcode.com/problems/find-mode-in-binary-search-tree/
 */
class FindModeInBinarySearchTree {
public:
    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> hmap;
        inOrder(root, hmap);
        return findModes(hmap);
    }
private:
    vector<int> findModes(unordered_map<int, int>& hmap) {
        vector<int> vec;
        int mostCnt = 0;
        for (unordered_map<int, int>::iterator iter = hmap.begin();
            iter != hmap.end();
            iter++
        ) {
            if (iter -> second > mostCnt) {
                mostCnt = iter -> second;
            }
        }
        for (unordered_map<int, int>::iterator iter = hmap.begin();
            iter != hmap.end();
            iter++
        ) {
            if (iter -> second == mostCnt) {
                vec.push_back(iter -> first);
            }
        }
        return vec;
    }
    void inOrder(TreeNode* root, unordered_map<int, int>& hmap) {
        if (root == nullptr) {
            return;
        }
        inOrder(root -> left, hmap);
        hmap[root -> val]++;
        inOrder(root -> right, hmap);
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
