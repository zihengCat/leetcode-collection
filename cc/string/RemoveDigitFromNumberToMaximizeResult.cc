#include <string>

using namespace std;

/**
 * LeetCode 2259. Remove Digit From Number to Maximize Result
 * https://leetcode.com/problems/remove-digit-from-number-to-maximize-result/
 */
class RemoveDigitFromNumberToMaximizeResult {
public:
    string removeDigit(string number, char digit) {
        string maxVal = "";
        for (int i = 0; i < number.size(); i++) {
            if (number[i] == digit) {
                string s = removeAt(number, i);
                maxVal = maxStr(maxVal, s);
            }
        }
        return maxVal;
    }
private:
    string maxStr(string& a, string& b) {
        int aLen = a.size();
        int bLen = b.size();
        if (aLen != bLen) {
            if (aLen > bLen) {
                return a;
            } else {
                return b;
            }
        }
        for (int i = 0; i < aLen; i++) {
            if (a[i] != b[i]) {
                if (a[i] > b[i]) {
                    return a;
                } else {
                    return b;
                }
            }
        }
        return a;
    }
    string removeAt(string& s, int idx) {
        string ss;
        int n = s.size();
        for (int i = 0; i < idx; i++) {
            ss.push_back(s[i]);
        }
        for (int i = idx + 1; i < n; i++) {
            ss.push_back(s[i]);
        }
        return ss;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
