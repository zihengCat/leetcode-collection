#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

/**
 * LeetCode 2186. Minimum Number of Steps to Make Two Strings Anagram II
 * https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram-ii/
 */
class MinimumNumberOfStepsToMakeTwoStringsAnagramII {
public:
    int minSteps(string s, string t) {
        // - Union keys
        // - Build maps
        unordered_set<char> uSet;
        unordered_map<char, int> sMap, tMap;
        for (int i = 0; i < s.size(); i++) {
            uSet.insert(s[i]);
            sMap[s[i]]++;
        }
        for (int i = 0; i < t.size(); i++) {
            uSet.insert(t[i]);
            tMap[t[i]]++;
        }
        // Count difference
        int cnt = 0;
        for (unordered_set<char>::iterator iter = uSet.begin();
            iter != uSet.end();
            iter++
        ) {
            cnt += doAbs(sMap[*iter] - tMap[*iter]);
        }
        return cnt;
    }
private:
    int doAbs(int n) {
        return n > 0 ? n : -1 * n;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
