#include <string>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 205. Isomorphic Strings
 * https://leetcode.com/problems/isomorphic-strings/
 */
class IsomorphicStrings {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        unordered_map<char, int> sMap;
        unordered_map<char, int> tMap;
        int sIdx = 0;
        int tIdx = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            sIdx = sMap.find(s[i]) == sMap.end() ? -1 : sMap[s[i]];
            tIdx = tMap.find(t[i]) == tMap.end() ? -1 : tMap[t[i]];
            if (sIdx != tIdx) {
                return false;
            }
            sMap[s[i]] = i;
            tMap[t[i]] = i;
        }
        return true;
    }
};

/* EOF */
