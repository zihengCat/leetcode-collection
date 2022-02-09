#include <vector>

using namespace std;

/**
 * LeetCode 2160. Minimum Sum of Four Digit Number After Splitting Digits
 * https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits/
 */
class MinimumSumOfFourDigitNumberAfterSplittingDigits {
public:
    int minimumSum(int num) {
        vector<int> v = splitDigits(num);
        sort(v.begin(), v.end());
        int a = v[0] * 10 + v[3];
        int b = v[1] * 10 + v[2];
        return a + b;
    }
private:
    vector<int> splitDigits(int n) {
        vector<int> v;
        while (n > 0) {
            v.push_back(n % 10);
            n /= 10;
        }
        return v;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
