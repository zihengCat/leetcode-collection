#include <vector>

using namespace std;

/**
 * LeetCode 1480. Running Sum of 1d Array
 * https://leetcode.com/problems/running-sum-of-1d-array/
 */
class RunningSumOf1DArray {
public:
    vector<int> runningSum(vector<int>& nums) {
        int s = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            s += nums[i];
            nums[i] = s;
        }
        return nums;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
