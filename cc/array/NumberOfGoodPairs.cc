#include <vector>

using namespace std;

/**
 * LeetCode 1512. Number of Good Pairs
 * https://leetcode.com/problems/number-of-good-pairs/
 */
class NumberOfGoodPairs {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt = 0;
        int vLen = nums.size();
        for (int i = 0; i < vLen; i++) {
            for (int j = i + 1; j < vLen; j++) {
                if (nums[i] == nums[j]) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

/* EOF */
