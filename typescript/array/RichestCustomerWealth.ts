/**
 * LeetCode 1672. Richest Customer Wealth
 * https://leetcode.com/problems/richest-customer-wealth/
 */
function maximumWealth(accounts: number[][]): number {
    let max: number = 0;
    accounts.forEach((v: number[], i: number) => {
        let val: number = 0;
        v.forEach((n: number, j: number) => {
            val += n;
        });
        if (val > max) {
            max = val;
        }
    });
    return max;
};

// EOF
