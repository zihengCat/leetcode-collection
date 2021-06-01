/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 */
int guess(int num);

/**
 * LeetCode 374. Guess Number Higher or Lower
 * https://leetcode.com/problems/guess-number-higher-or-lower/
 */
class GuessNumberHigherOrLower {
public:
    int guessNumber(int n) {
        return binarySearch(1, n);
    }
private:
    int binarySearch(int left, int right) {
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int ans = guess(mid);
            switch (ans) {
            case 0:
                return mid;
            case 1:
                left = mid + 1;
                break;
            case -1:
                right = mid - 1;
                break;
            default:
                break;
            }
        }
        return 0;
    }
};

/* EOF */
