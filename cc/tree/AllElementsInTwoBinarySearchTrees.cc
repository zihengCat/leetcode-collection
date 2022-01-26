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
 * LeetCode 1305. All Elements in Two Binary Search Trees
 * https://leetcode.com/problems/all-elements-in-two-binary-search-trees/
 */
class AllElementsInTwoBinarySearchTrees {
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> v;
        inOrder(root1, v);
        inOrder(root2, v);
        qSort(v, 0, v.size() - 1);
        return v;
    }
private:
    void qSort(vector<int>& arr, int l, int r) {
        if (l >= r) {
            return;
        }
        int i = doPartition(arr, l, r);
        qSort(arr, l, i - 1);
        qSort(arr, i + 1, r);
    }
    int doPartition(vector<int>& arr, int l, int r) {
        int pivot = arr[l];
        int pl = l;
        int pr = r;
        for (/* ... */; pl < pr; /* ... */) {
            while (pl < pr && arr[pr] > pivot) {
                pr--;
            }
            while (pl < pr && arr[pl] <= pivot) {
                pl++;
            }
            doSwap(arr, pl, pr);
        }
        doSwap(arr, l, pl);
        return pl;
    }
    void doSwap(vector<int>& arr, int i, int j) {
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
    void inOrder(TreeNode* r, vector<int>& v) {
        if (r == nullptr) {
            return;
        }
        inOrder(r -> left, v);
        v.push_back(r -> val);
        inOrder(r -> right, v);
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
