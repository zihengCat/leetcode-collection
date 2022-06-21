#include <string>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 2283. Check if Number Has Equal Digit Count and Digit Value
 * https://leetcode.com/problems/check-if-number-has-equal-digit-count-and-digit-value/
 */
class CheckIfNumberHasEqualDigitCountAndDigitValue {
public:
    bool digitCount(string num) {
        unordered_map<int, int> m;
        for (int i = 0; i < num.size(); i++) {
            m[num[i]]++;
        }
        for (int i = 0; i < num.size(); i++) {
            if (num[i] != m[i + '0'] + '0') {
                return false;
            }
        }
        return true;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
