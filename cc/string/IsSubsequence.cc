#include <string>

using namespace std;

/**
 * LeetCode 392. Is Subsequence
 * https://leetcode.com/problems/is-subsequence/
 */
class IsSubsequence {
public:
    bool isSubsequence(string s, string t) {
        int sLen = s.size();
        int tLen = t.size();
        int sIdx = 0;
        int tIdx = 0;
        for (/* ... */; sIdx < sLen; sIdx++) {
            while (tIdx < tLen && t[tIdx] != s[sIdx]) {
                tIdx++;
            }
            // Not found
            if (tIdx == tLen) {
                return false;
            }
            // Move to next
            tIdx++;
        }

        // Ok
        return true;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
