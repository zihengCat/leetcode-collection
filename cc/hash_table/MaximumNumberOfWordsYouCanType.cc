#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

/**
 * LeetCode 1935. Maximum Number of Words You Can Type
 * https://leetcode.com/problems/maximum-number-of-words-you-can-type/
 */
class MaximumNumberOfWordsYouCanType {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> hSet = addToSet(brokenLetters);
        vector<string> wArr = splitWords(text, ' ');
        int cnt = wArr.size();
        for (int i = 0; i < wArr.size(); i++) {
            for (int j = 0; j < wArr[i].size(); j++) {
                if (hSet.find(wArr[i][j]) != hSet.end()) {
                    cnt--;
                    break;
                }
            }
        }
        return cnt;
    }
private:
    vector<string> splitWords(string& s, char c) {
        vector<string> arr;
        int n = s.size();
        int sIdx = 0;
        for (int i = 0; i < n; /* ... */) {
            sIdx = i;
            while (i < n && s[i] != c) {
                i++;
            }
            arr.push_back(string(s, sIdx, i - sIdx));
            i++;
        }
        return arr;
    }
    unordered_set<char> addToSet(string& s) {
        unordered_set<char> hset;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            hset.insert(s[i]);
        }
        return hset;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
