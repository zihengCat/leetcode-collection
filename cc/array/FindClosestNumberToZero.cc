#include <vector>

using namespace std;

/**
 * LeetCode 2239. Find Closest Number to Zero
 * https://leetcode.com/problems/find-closest-number-to-zero/
 */
class FindClosestNumberToZero {
public:
    int findClosestNumber(vector<int>& nums) {
        int n = 0;
        int d = ~(1 << 31); // INT32_MAX
        int t = 0;
        for (int i = 0; i < nums.size(); i++) {
            t = abs(0 - nums[i]);
            if (t < d) {
                n = nums[i];
                d = t;
            }
            if (t == d) {
                n = max(n, nums[i]);
            }
        }
        return n;
    }
private:
    int abs(int n) {
        return n < 0 ? -1 * n : n;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
