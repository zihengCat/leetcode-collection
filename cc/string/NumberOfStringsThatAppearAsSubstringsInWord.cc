#include <string>
#include <vector>

using namespace std;

/**
 * LeetCode 1967. Number of Strings That Appear as Substrings in Word
 * https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/
 */
class NumberOfStringsThatAppearAsSubstringsInWord {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt = 0;
        int n = patterns.size();
        for (int i = 0; i < n; i++) {
            if (word.find(patterns[i]) != string::npos) {
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
