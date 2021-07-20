#include <vector>

using namespace std;

/**
 * LeetCode 357. Count Numbers with Unique Digits
 * https://leetcode.com/problems/count-numbers-with-unique-digits/
 */
class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if (n > 10) { // digits: [0, 9]
            n = 10;
        }
        vector<bool> used(10, false);
        int maximumNum = doPow(10, n);
        return countNumbers(0, maximumNum, used);
    }
private:
    int countNumbers(int currentNum, int maximumNum, vector<bool>& used) {
        if (currentNum >= maximumNum) {
            return 0;
        }
        int cnt = 1;
        for (int i = 0; i < 10; i++) {
            if (currentNum == 0 && i == 0) { // skip leading zero
				continue;
			}
            if (!used[i]) {
                used[i] = true;
                cnt += countNumbers(10 * currentNum + i, maximumNum, used);
                used[i] = false;
            }
        }
        return cnt;
    }
    int doPow(int base, int n) {
        int r = 1;
        for (/* ... */; n > 0; n--) {
            r *= base;
        }
        return r;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
