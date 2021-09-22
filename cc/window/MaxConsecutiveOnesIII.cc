#include <vector>

using namespace std;

/**
 * LeetCode 1004. Max Consecutive Ones III
 * https://leetcode.com/problems/max-consecutive-ones-iii/
 */
class MaxConsecutiveOnesIII {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxOnes = 0;
        int nLen = nums.size();
        int wStart = 0;
        // int wEnd = 0;
        int wSize = 0;
        int zeroCnt = 0;
        for (int wEnd = 0; wEnd < nLen; wEnd++) {
            if (nums[wEnd] == 0) {
                zeroCnt++;
            }
            while (zeroCnt > k) {
                if (nums[wStart] == 0) {
                    zeroCnt--;
                }
                wStart++;
            }
            wSize = wEnd - wStart + 1;
            if (wSize > maxOnes) {
                maxOnes = wSize;
            }
        }
        return maxOnes;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
