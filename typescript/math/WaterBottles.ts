/**
 * LeetCode 1518. Water Bottles
 * https://leetcode.com/problems/water-bottles/
 */
function numWaterBottles(numBottles: number, numExchange: number): number {
    let sumBottles: number = numBottles;
    let remainder: number = 0;
    while (numBottles >= numExchange) {
        remainder = numBottles % numExchange;
        numBottles = Math.floor(numBottles / numExchange);
        sumBottles += numBottles;
        numBottles += remainder;
    }
    return sumBottles;
};

// EOF
