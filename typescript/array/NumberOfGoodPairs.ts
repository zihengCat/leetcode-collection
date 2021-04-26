/**
 * LeetCode 1512. Number of Good Pairs
 * https://leetcode.com/problems/number-of-good-pairs/
 */
function numIdenticalPairs(nums: number[]): number {
    let nLen: number = nums.length;
    let cnt: number = 0;
    for (let i: number = 0; i < nLen; i++) {
        for (let j: number = i + 1; j < nLen; j++) {
            if (nums[i] === nums[j]) {
                cnt++;
            }
        }
    }
    return cnt;
};

// EOF
