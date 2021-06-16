#include <vector>

using namespace std;

/**
 * LeetCode 1460. Make Two Arrays Equal by Reversing Sub-arrays
 * https://leetcode.com/problems/make-two-arrays-equal-by-reversing-sub-arrays/
 */
class MakeTwoArraysEqualByReversingSubArrays {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        quickSort(target, 0, target.size() - 1);
        quickSort(arr, 0, arr.size() - 1);
        return target == arr;
    }
private:
    void quickSort(vector<int>& arr, int left, int right) {
        if (left >= right) {
            return;
        }
        int idx = doPartition(arr, left, right);
        quickSort(arr, left, idx - 1);
        quickSort(arr, idx + 1, right);
    }
    int doPartition(vector<int>& arr, int left, int right) {
        int pivot = arr[left];
        int pLeft = left;
        int pRight = right;
        for (/* ... */; pLeft < pRight; /* ... */) {
            while (pLeft < pRight && arr[pRight] > pivot) {
                pRight--;
            }
            while (pLeft < pRight && arr[pLeft] <= pivot) {
                pLeft++;
            }
            doSwap(arr, pLeft, pRight);
        }
        doSwap(arr, left, pLeft);
        return pLeft;
    }
    void doSwap(vector<int>& arr, int i, int j) {
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

