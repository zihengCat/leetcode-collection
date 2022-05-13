#include <string>

using namespace std;

/**
 * LeetCode 2264. Largest 3-Same-Digit Number in String
 * https://leetcode.com/problems/largest-3-same-digit-number-in-string/
 */
class LargestThreeSameDigitNumberInString {
public:
    string largestGoodInteger(string num) {
        string s = "";
        string t = "";
        int wSize = 3;
        for (int i = 0 + wSize - 1; i < num.size(); i++) {
            if (isSame(num, i - wSize + 1, i)) {
                t = num.substr(i - wSize + 1, wSize);
                s = compareLarge(s, t);
            }
        }
        return s;
    }
private:
    string compareLarge(string& a, string& b) {
        if (a == "") {
            return b;
        }
        return a[0] > b[0] ? a : b;
    }
    bool isSame(string& s, int sIdx, int eIdx) {
        char c = s[sIdx];
        for (int i = sIdx; i <= eIdx; i++) {
            if (s[i] != c) {
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
