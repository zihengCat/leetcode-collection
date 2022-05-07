#include <vector>
#include <string>

using namespace std;

/**
 * LeetCode 2255. Count Prefixes of a Given String
 * https://leetcode.com/problems/count-prefixes-of-a-given-string/
 */
class CountPrefixesOfAGivenString {
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt = 0;
        for (int i = 0; i < words.size(); i++) {
            if (isPrefix(words[i], s)) {
                cnt++;
            }
        }
        return cnt;
    }
private:
    bool isPrefix(string& w, string& s) {
        for (int i = 0; i < w.size(); i++) {
            if (w[i] != s[i]) {
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
