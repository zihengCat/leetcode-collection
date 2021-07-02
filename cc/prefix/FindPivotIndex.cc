#include <vector>

using namespace std;

/**
 * LeetCode 724. Find Pivot Index
 * https://leetcode.com/problems/find-pivot-index/
 */
class FindPivotIndex {
public:
    int pivotIndex(vector<int>& nums) {
        int vSum = 0;
        int vLen = nums.size();
        for (int i = 0; i < vLen; i++) {
            vSum += nums[i];
        }
        int lSum = 0;
        for (int i = 0; i < vLen; i++) {
            if (lSum == vSum - lSum - nums[i]) {
                return i;
            }
            lSum += nums[i];
        }
        return -1;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

