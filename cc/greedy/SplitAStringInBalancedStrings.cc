#include <string>

using namespace std;

/**
 * LeetCode 1221. Split a String in Balanced Strings
 * https://leetcode.com/problems/split-a-string-in-balanced-strings/
 */
class SplitAStringInBalancedStrings {
public:
    int balancedStringSplit(string s) {
        int cnt = 0;
        int num = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == 'L') {
                num++;
            } else if (s[i] == 'R') {
                num--;
            }
            if (num == 0) {
                cnt++;
            }
        }
        return cnt;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

