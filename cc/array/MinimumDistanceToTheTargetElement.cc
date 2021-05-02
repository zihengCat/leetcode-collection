#include <vector>
#include <stdlib.h>

using namespace std;

/**
 * LeetCode 1848. Minimum Distance to the Target Element
 * https://leetcode.com/problems/minimum-distance-to-the-target-element/
 */
class MinimumDistanceToTheTargetElement {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int minDis = INT32_MAX;
        int vLen = nums.size();
        for (int i = 0; i < vLen; i++) {
            if (nums[i] == target) {
                minDis = min(minDis, abs(i - start));
            }
        }
        return minDis;
    }
};

int main(int argc, char const *argv[]) {
    // ..
    return 0;
}

/* EOF */
