#include <vector>

using namespace std;

/**
 * LeetCode 2089. Find Target Indices After Sorting Array
 * https://leetcode.com/problems/find-target-indices-after-sorting-array/
 */
class FindTargetIndicesAfterSortingArray {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        quickSort(nums, 0, nums.size() - 1);
        vector<int> v;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                v.push_back(i);
            }
        }
        return v;
    }
private:
    void quickSort(vector<int>& arr, int left, int right) {
        if (left >= right) {
            return;
        }
        int i = doPartition(arr, left, right);
        quickSort(arr, left, i - 1);
        quickSort(arr, i + 1, right);
    }
    int doPartition(vector<int>& arr, int left, int right) {
        int pivot = arr[left];
        int pLeft = left;
        int pRight = right;
        while (pLeft < pRight) {
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
