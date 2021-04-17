#include <vector>

using namespace std;

/**
 * LeetCode 1827. Minimum Operations to Make the Array Increasing
 * https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/
 */
class MinimumOperationsToMakeTheArrayIncreasing {
public:
    int minOperations(vector<int>& nums) {
        if (nums.size() < 2) {
            return 0;
        }
        int nLen = nums.size();
        int opCnt = 0;
        int prevNum = nums[0];
        for (int i = 1; i < nLen; i++) {
            if (nums[i] <= prevNum) {
                prevNum += 1;
                opCnt += prevNum - nums[i];
            } else {
                prevNum = nums[i];
            }
        }
        return opCnt;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
