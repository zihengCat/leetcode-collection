#include <string>

using namespace std;

/**
 * LeetCode 2000. Reverse Prefix of Word
 * https://leetcode.com/problems/reverse-prefix-of-word/
 */
class ReversePrefixOfWord {
public:
    string reversePrefix(string word, char ch) {
        int idx = findChar(word, ch);
        if (idx == -1) {
            return word;
        }
        doReverse(word, 0, idx);
        return word;
    }
private:
    int findChar(string& word, char c) {
        for (int i = 0; i < word.size(); i++) {
            if (word[i] == c) {
                return i;
            }
        }
        return -1;
    }
    void doReverse(string& s, int sIdx, int eIdx) {
        for (/* ... */; sIdx < eIdx; sIdx++, eIdx--) {
            char t = s[sIdx];
            s[sIdx] = s[eIdx];
            s[eIdx] = t;
        }
    }
};

int main(int argc, char const *argv[]) {
    // ..
    return 0;
}

/* EOF */
