#include <vector>
#include <algorithm>

using namespace std;

/**
 * LeetCode 1646. Get Maximum in Generated Array
 * https://leetcode.com/problems/get-maximum-in-generated-array/
 */
class GetMaximumInGeneratedArray {
public:
    int getMaximumGenerated(int n) {
        if (n < 0) {
            return 0;
        }
        if (n == 0 || n == 1) {
            return n;
        }
        vector<int> nums(n + 1, 0);
        nums[0] = 0;
        nums[1] = 1;
        int vLen = n / 2;
        int maxVal = INT32_MIN;
        for (int i = 1; i <= vLen; i++) {
            if (2 * i <= n) {
                nums[2 * i] = nums[i];
                maxVal = max(maxVal, nums[2 * i]);
            }
            if (2 * i + 1 <= n) {
                nums[2 * i + 1] = nums[i] + nums[i + 1];
                maxVal = max(maxVal, nums[2 * i + 1]);
            }
        }
        return maxVal;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
