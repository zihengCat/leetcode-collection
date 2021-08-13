#include <string>
#include <vector>

using namespace std;

/**
 * LeetCode 1961. Check If String Is a Prefix of Array
 * https://leetcode.com/problems/check-if-string-is-a-prefix-of-array/
 */
class CheckIfStringIsAPrefixOfArray {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int n = s.size();
        int idx = 0;
        for (int i = 0; i < words.size() && idx < n; i++) {
            for (int j = 0; j < words[i].size(); j++) {
                if (idx == n || s[idx] != words[i][j]) {
                    return false;
                }
                idx++;
            }
        }
        return idx == n;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
