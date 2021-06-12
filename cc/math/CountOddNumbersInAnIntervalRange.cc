/**
 * LeetCode 1523. Count Odd Numbers in an Interval Range
 * https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/
 */
class CountOddNumbersInAnIntervalRange {
public:
    int countOdds(int low, int high) {
        int cnt = (high - low) / 2;
        if (low % 2 == 1 || high % 2 == 1) {
            cnt++;
        }
        return cnt;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

