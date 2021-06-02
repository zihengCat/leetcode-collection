#include <vector>

using namespace std;

/**
 * LeetCode 453. Minimum Moves to Equal Array Elements
 * https://leetcode.com/problems/minimum-moves-to-equal-array-elements/
 */
class MinimumMovesToEqualArrayElements {
public:
    int minMoves(vector<int>& nums) {
        int opCnt = 0;
        int minNum = INT32_MAX;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] < minNum) {
                minNum = nums[i];
            }
        }
        for (int i = 0; i < n; i++) {
            opCnt += nums[i] - minNum;
        }
        return opCnt;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
