#include <string>

using namespace std;

/**
 * LeetCode 557. Reverse Words in a String III
 * https://leetcode.com/problems/reverse-words-in-a-string-iii/
 */
class ReverseWordsInAStringIII {
public:
    string reverseWords(string s) {
        int startIdx = 0;
        // int endIdx = 0;
        int n = s.size();
        for (int i = 0; i < n; /* ... */) {
            startIdx = i;
            while (i < n && s[i] != ' ') {
                i++;
            }
            reverseAndSet(s, startIdx, i - 1);
            i++;
        }
        return s;
    }
private:
    void reverseAndSet(string& s, int startIdx, int endIdx) {
        char c = 0;
        for (/* ... */; startIdx <= endIdx; startIdx++, endIdx--) {
            c = s[startIdx];
            s[startIdx] = s[endIdx];
            s[endIdx] = c;
        }
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
