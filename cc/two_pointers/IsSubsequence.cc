#include <string>

using namespace std;

/**
 * LeetCode 392. Is Subsequence
 * https://leetcode.com/problems/is-subsequence/
 */
class IsSubsequence {
public:
    bool isSubsequence(string s, string t) {
        int sIdx = 0, tIdx = 0;
        int sLen = s.size(), tLen = t.size();
        for (/* ... */; sIdx < sLen; sIdx++) {
            // Find target
            while (tIdx < tLen && t[tIdx] != s[sIdx]) {
                tIdx++;
            }
            // Not found
            if (tIdx == tLen) {
                return false;
            }
            // Move next
            tIdx++;
        }
        return true;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
