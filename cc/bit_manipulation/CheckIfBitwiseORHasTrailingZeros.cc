#include <vector>

using namespace std;

/**
 * LeetCode 2980. Check if Bitwise OR Has Trailing Zeros
 * https://leetcode.com/problems/check-if-bitwise-or-has-trailing-zeros/
 */
class CheckIfBitwiseORHasTrailingZeros {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        if (nums.size() == 0) {
            return false;
        }
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            if ((nums[i] & 0x01) == 0) {
                cnt++;
            }
        }
        return cnt >= 2;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
