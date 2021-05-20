/**
 * LeetCode 747. Largest Number At Least Twice of Others
 * https://leetcode.com/problems/largest-number-at-least-twice-of-others/
 */
function dominantIndex(nums: number[]): number {
    let largestNumIdx: number = -1;
    let largestNum: number = Number.MIN_SAFE_INTEGER;
    let secondLargestNum: number = Number.MIN_SAFE_INTEGER;
    for (let i: number = 0; i < nums.length; i++) {
        if (nums[i] > largestNum) {
            secondLargestNum = largestNum;
            largestNum = nums[i];
            largestNumIdx = i;
        } else if (nums[i] > secondLargestNum && nums[i] <= largestNum) {
            secondLargestNum = nums[i];
        }
    }
    return largestNum < secondLargestNum * 2 ? -1 : largestNumIdx;
};

// EOF
