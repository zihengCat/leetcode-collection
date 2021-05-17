#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 290. Word Pattern
 * https://leetcode.com/problems/word-pattern/
 */
class WordPattern {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> wordArr = split(s, ' ');
        if (wordArr.size() != pattern.size()) {
            return false;
        }
        unordered_map<char, int> cMap;
        unordered_map<string, int> sMap;
        int cIdx = 0;
        int sIdx = 0;
        int n = wordArr.size();
        for (int i = 0; i < n; i++) {
            cIdx = cMap.find(pattern[i]) == cMap.end() ? -1 : cMap[pattern[i]];
            sIdx = sMap.find(wordArr[i]) == sMap.end() ? -1 : sMap[wordArr[i]];
            cMap[pattern[i]] = i;
            sMap[wordArr[i]] = i;
            if (cIdx != sIdx) {
                return false;
            }
        }
        return true;
    }
public:
    vector<string> split(string& s, char c) {
        vector<string> vec;
        int startIdx = 0;
        int n = s.size();
        for (int i = 0; i < n; /* ... */) {
            startIdx = i;
            while (i < n && s[i] != c) {
                i++;
            }
            vec.push_back(string(s, startIdx, i - startIdx));
            i++;
        }
        return vec;
    }
};

int main(int argc, char const *argv[]) {
    WordPattern obj = WordPattern();
    string s = "aaa bbb ccc";
    vector<string> v = obj.split(s, ' ');
    for (int i = 0; i < v.size(); i++) {
        printf("%s\n", v[i].c_str());
    }
    // ...
    return 0;
}

/* EOF */
