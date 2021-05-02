#include <string>

using namespace std;

/**
 * LeetCode 1844. Replace All Digits with Characters
 * https://leetcode.com/problems/replace-all-digits-with-characters/
 */
class ReplaceAllDigitsWithCharacters {
public:
    string replaceDigits(string s) {
        int sLen = s.size();
        for (int i = 1; i < sLen; i += 2) {
            // shift
            s[i] = s[i - 1] + (s[i] - '0');
        }
        return s;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
