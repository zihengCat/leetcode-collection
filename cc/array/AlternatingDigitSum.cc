#include <vector>

using namespace std;

/**
 * LeetCode 2544. Alternating Digit Sum
 * https://leetcode.com/problems/alternating-digit-sum/
 */
class AlternatingDigitSum {
public:
    int alternateDigitSum(int n) {
        vector<int> v = findDigits(n);
        int sign = 1;
        int dSum = 0;
        for (int i = 0; i < v.size(); i++) {
            dSum += v[i] * sign;
            sign *= -1;
        }
        return dSum;
    }
private:
    vector<int> findDigits(int n) {
        vector<int> v;
        while (n > 0) {
            v.insert(v.begin(), n % 10);
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
