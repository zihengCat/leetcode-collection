#include <vector>

using namespace std;

/**
 * LeetCode 747. Largest Number At Least Twice of Others
 * https://leetcode.com/problems/largest-number-at-least-twice-of-others/
 */
class LargestNumberAtLeastTwiceOfOthers {
public:
    int dominantIndex(vector<int>& nums) {
        if (nums.size() < 2) {
            return 0;
        }
        int largestNumIdx = -1;
        int largestNum = INT32_MIN;
        int secondLargestNum = INT32_MIN;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] > largestNum) {
                secondLargestNum = largestNum;
                largestNum = nums[i];
                largestNumIdx = i;
            } else if (nums[i] > secondLargestNum && nums[i] <= largestNum) {
                secondLargestNum = nums[i];
            }
        }
        return largestNum < secondLargestNum * 2 ? -1 : largestNumIdx;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
