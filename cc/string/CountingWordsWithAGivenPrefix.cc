#include <vector>
#include <string>

using namespace std;

/**
 * LeetCode 2185. Counting Words With a Given Prefix
 * https://leetcode.com/problems/counting-words-with-a-given-prefix/
 */
class CountingWordsWithAGivenPrefix {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0;
        for (int i = 0; i < words.size(); i++) {
            if (hasPrefix(words[i], pref)) {
                cnt++;
            }
        }
        return cnt;
    }
private:
    bool hasPrefix(string& s, string& pref) {
        if (s.size() < pref.size()) {
            return false;
        }
        for (int i = 0; i < pref.size(); i++) {
            if (s[i] != pref[i]) {
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
