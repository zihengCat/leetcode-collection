#include <string>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 2351. First Letter to Appear Twice
 * https://leetcode.com/problems/first-letter-to-appear-twice/
 */
class FirstLetterToAppearTwice {
public:
    char repeatedCharacter(string s) {
        unordered_map<char, int> m;
        for (int i = 0; i < s.size(); i++) {
            if (m[s[i]] == 1) {
                return s[i];
            }
            m[s[i]]++;
        }
        return 0;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
