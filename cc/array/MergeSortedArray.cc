#include <vector>

using namespace std;

/**
 * LeetCode 88. Merge Sorted Array
 * https://leetcode.com/problems/merge-sorted-array/
 */
class MergeSortedArray {
public:
    void merge(vector<int>& numsA, int m, vector<int>& numsB, int n) {
        vector<int> v(m + n, 0);
        int i = 0, j = 0, p = 0;
        while (i < m && j < n) {
            if (numsA[i] < numsB[j]) {
                v[p] = numsA[i];
                i++;
            } else {
                v[p] = numsB[j];
                j++;
            }
            p++;
        }
        while (i < m) {
            v[p] = numsA[i];
            i++;
            p++;
        }
        while (j < n) {
            v[p] = numsB[j];
            j++;
            p++;
        }
        // Overwrite
        for (int k = 0; k < v.size(); k++) {
            numsA[k] = v[k];
        }
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
