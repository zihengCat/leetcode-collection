#include <vector>

using namespace std;

/**
 * LeetCode 1480. Running Sum of 1d Array
 * https://leetcode.com/problems/running-sum-of-1d-array/
 */
class RunningSumOf1DArray {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        int vLen = nums.size();
        for (int i = 0; i < vLen; i++) {
            sum += nums[i];
            nums[i] = sum;
        }
        return nums;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
