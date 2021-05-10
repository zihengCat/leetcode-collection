#include <vector>

using namespace std;

/**
 * LeetCode 1464. Maximum Product of Two Elements in an Array
 * https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
 */
class MaximumProductOfTwoElementsInAnArray {
public:
    int maxProduct(vector<int>& nums) {
        int firstNum = INT32_MIN;
        int secondNum = INT32_MIN;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] > firstNum) {
                secondNum = firstNum;
                firstNum = nums[i];
            } else if (nums[i] > secondNum && nums[i] <= firstNum) {
                secondNum = nums[i];
            }
        }
        return (firstNum - 1) * (secondNum - 1);
    }
};

/* EOF */
