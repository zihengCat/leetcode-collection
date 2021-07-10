#include <vector>
#include <algorithm>

using namespace std;

/**
 * LeetCode 628. Maximum Product of Three Numbers
 * https://leetcode.com/problems/maximum-product-of-three-numbers/
 */
class MaximumProductOfThreeNumbers {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        quickSort(nums, 0, n - 1);
        return findMax(
            nums[n - 1] * nums[n - 2] * nums[n - 3],
            nums[0] * nums[1] * nums[n - 1]
        );
    }
private:
    int findMax(int a, int b) {
        return a > b ? a : b;
    }
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
        int pLeft = left, pRight = right;
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
