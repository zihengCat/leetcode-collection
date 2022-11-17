#include <vector>
#include <unordered_set>

using namespace std;

/**
 * LeetCode 2441. Largest Positive Integer That Exists With Its Negative
 * https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/
 */
class LargestPositiveIntegerThatExistsWithItsNegative {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int> s;
        int maxN = -1;
        for (int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0 && nums[i] > maxN && s.find(-1 * nums[i]) != s.end()) {
                maxN = nums[i];
            }
        }
        return maxN;
    }
};

int main() {
    // ...
}

/* EOF */
