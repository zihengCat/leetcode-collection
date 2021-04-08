#include <vector>
#include <string>

using namespace std;

/**
 * LeetCode 1684. Count the Number of Consistent Strings
 * https://leetcode.com/problems/count-the-number-of-consistent-strings/
 */
class CountTheNumberOfConsistentStrings {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        if (allowed.length() == 0 || words.size() == 0) {
            return 0;
        }
        int cnt = 0;
        int memo[26] = {0, };
        for (int i = 0; i < allowed.length(); i++) {
            memo[allowed[i] - 'a']++;
        }
        for (int i = 0; i < words.size(); i++) {
            if (allCharactersAppears(memo, words[i])) {
                cnt++;
            }
        }
        return cnt;
    }
private:
    bool allCharactersAppears(int* memo, string& s) {
        for (int i = 0; i < s.length(); i++) {
            if (!(memo[s[i] - 'a'] > 0)) {
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
