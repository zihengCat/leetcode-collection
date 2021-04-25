#include <vector>
#include <string>

using namespace std;

/**
 * LeetCode 1528. Shuffle String
 * https://leetcode.com/problems/shuffle-string/
 */
class ShuffleString {
public:
    string restoreString(string s, vector<int>& indices) {
        int vLen = s.length();
        string shuffledStr(vLen, 0);
        for (int i = 0; i < vLen; i++) {
            shuffledStr[indices[i]] = s[i];
        }
        return shuffledStr;
    }
};

/* EOF */
