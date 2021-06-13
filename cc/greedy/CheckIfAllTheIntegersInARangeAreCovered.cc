#include <vector>

using namespace std;

/**
 * LeetCode 1893. Check if All the Integers in a Range Are Covered
 * https://leetcode.com/problems/check-if-all-the-integers-in-a-range-are-covered/
 */
class CheckIfAllTheIntegersInARangeAreCovered {
public:
    bool isCovered(vector<vector<int> >& ranges, int left, int right) {
        vector<bool> covered(51, false);
        int n = ranges.size();
        for (int i = 0; i < n; i++) {
            for (int j = ranges[i][0]; j <= ranges[i][1]; j++) {
                covered[j] = true;
            }
        }
        for (int i = left; i <= right; i++) {
            if (!covered[i]) {
                return false;
            }
        }
        return true;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

