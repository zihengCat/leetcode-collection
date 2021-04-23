#include <vector>
#include <algorithm>

using namespace std;

/**
 * LeetCode 1608. Special Array With X Elements Greater Than or Equal X
 * https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/
 */
class SpecialArrayWithXElementsGreaterThanOrEqualX {
public:
    int specialArray(vector<int>& nums) {
        int x = -1;
        sort(nums.begin(), nums.end());
        int vLen = nums.size();
        for (int i = 0; i < vLen; i++) {
            x = vLen - i;
            if (nums[i] >= x) {
                return x;
            }
        }
        return -1;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
