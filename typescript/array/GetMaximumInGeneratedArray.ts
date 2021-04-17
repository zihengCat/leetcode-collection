/**
 * LeetCode 1646. Get Maximum in Generated Array
 * https://leetcode.com/problems/get-maximum-in-generated-array/
 */
function getMaximumGenerated(n: number): number {
    if (n < 0) {
        return 0;
    }
    if (n === 0 || n === 1) {
        return n;
    }
    let nums: number[] = new Array(n + 1);
    nums[0] = 0;
    nums[1] = 1;
    let nLen: number = n / 2;
    let vMax: number = -1;
    for (let i: number = 1; i <= nLen; i++) {
        if (2 * i <= n) {
            nums[2 * i] = nums[i];
            vMax = Math.max(vMax, nums[2 * i]);
        }
        if (2 * i + 1 <= n) {
            nums[2 * i + 1] = nums[i] + nums[i + 1];
            vMax = Math.max(vMax, nums[2 * i + 1]);
        }
    }
    return vMax;
}

// EOF
