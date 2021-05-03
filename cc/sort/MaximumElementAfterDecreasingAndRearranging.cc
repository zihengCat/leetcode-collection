#include <vector>
#include <algorithm>

using namespace std;

/**
 * LeetCode 1846. Maximum Element After Decreasing and Rearranging
 * https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging/
 */
class MaximumElementAfterDecreasingAndRearranging {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        arr[0] = 1;
        int n = arr.size();
        for (int i = 1; i < n; i++) {
            arr[i] = min(arr[i], arr[i - 1] + 1);
        }
        return arr[n - 1];
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
