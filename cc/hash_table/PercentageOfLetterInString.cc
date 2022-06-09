#include <string>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 2278. Percentage of Letter in String
 * https://leetcode.com/problems/percentage-of-letter-in-string/
 */
class PercentageOfLetterInString {
public:
    int percentageLetter(string s, char letter) {
        unordered_map<char, int> m;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            m[s[i]]++;
        }
        return 1.0 * m[letter] / n * 100;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
