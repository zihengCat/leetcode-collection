#include <vector>

using namespace std;

/**
 * LeetCode 1909. Remove One Element to Make the Array Strictly Increasing
 * https://leetcode.com/problems/remove-one-element-to-make-the-array-strictly-increasing/
 */
class RemoveOneElementToMakeTheArrayStrictlyIncreasing {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i] <= nums[i - 1]) {
                if (cnt > 1) {
                    return false;
                }
                if (i >= 2 && nums[i - 2] > nums[i]) {
                    nums[i] = nums[i - 1];
                }
                cnt++;
            }
        }
        return cnt <= 1;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

