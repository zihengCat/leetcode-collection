#include <string>

using namespace std;

/**
 * LeetCode 2299. Strong Password Checker II
 * https://leetcode.com/problems/strong-password-checker-ii/
 */
class StrongPasswordCheckerII {
public:
    bool strongPasswordCheckerII(string p) {
        bool cLen = false;
        bool cLower = false;
        bool cUpper = false;
        bool cDigit = false;
        bool cSpecial = false;
        bool cSame = false;
        char c = 0;
        char prev = 0;
        for (int i = 0; i < p.size(); i++) {
            // Check Length
            if (i >= 7) {
                cLen = true;
            }
            // Check Same
            c = p[i];
            if (c == prev) {
                cSame = true;
            }
            prev = c;
            // Check Lower
            if (c >= 'a' && c <= 'z') {
                cLower = true;
            }
            // Check Upper
            if (c >= 'A' && c <= 'Z') {
                cUpper = true;
            }
            // Check Digit
            if (c >= '0' && c <= '9') {
                cDigit = true;
            }
            // Check Special: "!@#$%^&*()-+"
            switch (c) {
                case '!':
                case '@':
                case '#':
                case '$':
                case '%':
                case '^':
                case '&':
                case '*':
                case '(':
                case ')':
                case '-':
                case '+':
                    cSpecial = true;
                    break;
                default:
                    break;
            }
        }
        return cLen && cLower && cUpper && cDigit && cSpecial && !cSame;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
