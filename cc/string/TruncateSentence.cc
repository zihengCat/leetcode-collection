#include <string>

using namespace std;

/**
 * LeetCode 1816. Truncate Sentence
 * https://leetcode.com/problems/truncate-sentence/
 */
class TruncateSentence {
public:
    string truncateSentence(string s, int k) {
        if (s.length() == 0 || k < 0) {
            return string();
        }
        int sLen = s.length();
        int idx = sLen;
        int cnt = 0;
        for (int i = 0; i < sLen; i++) {
            if (s[i] == ' ') {
                cnt++;
            }
            if (cnt == k) {
                idx = i;
                break;
            }
        }
        string r = string();
        r.append(s, 0, idx);
        return r;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
