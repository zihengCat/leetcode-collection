/**
 * LeetCode 1827. Minimum Operations to Make the Array Increasing
 * https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/
 */
function minOperations(nums: number[]): number {
    if (nums.length < 2) {
        return 0;
    }
    let opCnt: number = 0;
    let prevNum: number = nums[0];
    for (let i: number = 1; i < nums.length; i++) {
        if (nums[i] <= prevNum) {
            prevNum += 1;
            opCnt += prevNum - nums[i];
        } else {
            prevNum = nums[i];
        }
    }
    return opCnt;
};

// EOF
