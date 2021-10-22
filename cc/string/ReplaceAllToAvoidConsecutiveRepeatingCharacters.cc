#include <string>

using namespace std;

/**
 * LeetCode 1576. Replace All ?'s to Avoid Consecutive Repeating Characters
 * https://leetcode.com/problems/replace-all-s-to-avoid-consecutive-repeating-characters/
 */
class ReplaceAllToAvoidConsecutiveRepeatingCharacters {
public:
    string modifyString(string s) {
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == '?') {
                char leftChar = 0;
                char rightChar = 0;
                if (i > 0) {
                    leftChar = s[i - 1];
                }
                if (i + 1 < n) {
                    rightChar = s[i + 1];
                }
                for (char c = 'a'; c < 'z'; c++) {
                    if (c != leftChar && c != rightChar) {
                        s[i] = c;
                        break;
                    }
                }
            }
        }
        return s;
    }
};

int main(int argc, char const *argv[]) {
     // ...
    return 0;
}

/* EOF */
