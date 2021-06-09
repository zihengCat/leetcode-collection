#include <string>

using namespace std;

/**
 * LeetCode 1880. Check if Word Equals Summation of Two Words
 * https://leetcode.com/problems/check-if-word-equals-summation-of-two-words/
 */
class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        return parseWord(firstWord) + parseWord(secondWord) == parseWord(targetWord);
    }
private:
    int parseWord(string& s) {
        int r = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            r = r * 10 + s[i] - 'a';
        }
        return r;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
