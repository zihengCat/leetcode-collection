#include <vector>

using namespace std;

/**
 * LeetCode 485. Max Consecutive Ones
 * https://leetcode.com/problems/max-consecutive-ones/
 */
class MaxConsecutiveOnes {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mOnes = 0;
        int cOnes = 0;
        int n = nums.size();
        for (int i = 0; i < n; /* ... */) {
            switch (nums[i]) {
            case 1:
                cOnes = 0;
                // Count ones
                while (i < n && nums[i] == 1) {
                    i++;
                    cOnes++;
                }
                mOnes = max(mOnes, cOnes);
                break;
            default:
                i++;
                break;
            }
        }
        return mOnes;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
