#include <string>

using namespace std;

/**
 * LeetCode 1945. Sum of Digits of String After Convert
 * https://leetcode.com/problems/sum-of-digits-of-string-after-convert/
 */
class SumOfDigitsOfStringAfterConvert {
public:
    int getLucky(string s, int k) {
        string newStr = letterToDigit(s);
        for (/* ... */; k > 0; k--) {
            newStr = digitSum(newStr);
        }
        return stoi(newStr);
    }
private:
    string digitSum(string& s) {
        int dSum = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            dSum += s[i] - '0';
        }
        return to_string(dSum);
    }
    string letterToDigit(string& s) {
        string dStr;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            dStr.append(to_string(s[i] - 'a' + 1));
        }
        return dStr;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
