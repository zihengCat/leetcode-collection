#include <vector>

using namespace std;

/**
 * LeetCode 724. Find Pivot Index
 * https://leetcode.com/problems/find-pivot-index/
 */
class FindPivotIndex {
public:
    int pivotIndex(vector<int>& nums) {
        int aSum = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            aSum += nums[i];
        }
        int lSum = 0;
        for (int i = 0; i < n; i++) {
            if (lSum == aSum - lSum - nums[i]) {
                return i;
            }
            lSum += nums[i];
        }
        // Not found
        return -1;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

