/**
 * LeetCode 1281. Subtract the Product and Sum of Digits of an Integer
 * https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
 */
function subtractProductAndSum(n: number): number {
    let digitsSum: number = 0;
    let digitsProduct: number = 1;
    let remainder: number = 0;
    while (n > 0) {
        remainder = n % 10;
        digitsSum += remainder;
        digitsProduct *= remainder;
        n = Math.floor(n / 10);
    }
    return digitsProduct - digitsSum;
};

// EOF
