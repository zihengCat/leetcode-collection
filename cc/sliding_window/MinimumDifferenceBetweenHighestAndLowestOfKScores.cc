#include <vector>

using namespace std;

/**
 * LeetCode 1984. Minimum Difference Between Highest and Lowest of K Scores
 * https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/
 */
class MinimumDifferenceBetweenHighestAndLowestOfKScores {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        quickSort(nums, 0, n - 1);
        int minDiff = INT32_MAX;
        for (int i = 0; i + k - 1 < n; i++) {
            minDiff = min(minDiff, nums[i + k - 1] - nums[i]);
        }
        return minDiff;
    }
private:
    void quickSort(vector<int>& arr, int left, int right) {
        if (left > right) {
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
