#include <vector>

using namespace std;

/**
 * LeetCode 1913. Maximum Product Difference Between Two Pairs
 * https://leetcode.com/problems/maximum-product-difference-between-two-pairs/
 */
class MaximumProductDifferenceBetweenTwoPairs {
public:
    int maxProductDifference(vector<int>& nums) {
        int n = nums.size();
        quickSort(nums, 0, n - 1);
        return (nums[n - 1] * nums[n - 2]) - (nums[0] * nums[1]);
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

