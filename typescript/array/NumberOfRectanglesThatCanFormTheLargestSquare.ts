/**
 * LeetCode 1725. Number Of Rectangles That Can Form The Largest Square
 * https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square/
 */
function countGoodRectangles(rectangles: number[][]): number {
    let cnt: number = 0;
    let maxLen: number = 0;
    let cLen: number = 0;
    rectangles.forEach((v, _) => {
        cLen = Math.min(v[0], v[1]);
        if (cLen > maxLen) {
            maxLen = cLen;
            cnt = 1;
        } else if (cLen == maxLen) {
            cnt++
        }
    });
    return cnt;
};

// EOF
