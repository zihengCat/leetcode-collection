#include <vector>

using namespace std;

/**
 * LeetCode 1822. Sign of the Product of an Array
 * https://leetcode.com/problems/sign-of-the-product-of-an-array/
 */
class SignOfTheProductOfAnArray {
public:
    int arraySign(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        int nLen = nums.size();
        int productSign = 1;
        for (int i = 0; i < nLen; i++) {
            if (nums[i] > 0) {
                productSign *= 1;
            } else if (nums[i] < 0) {
                productSign *= -1;
            } else if (nums[i] == 0) {
                return 0;
            }
        }
        return productSign;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
