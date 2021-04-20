#include <string>
#include <algorithm>

using namespace std;

/**
 * LeetCode 1624. Largest Substring Between Two Equal Characters
 * https://leetcode.com/problems/largest-substring-between-two-equal-characters/
 */
class LargestSubstringBetweenTwoEqualCharacters {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int maxLen = -1;
        int idxMap[26] = {0, };
        int cIdx = 0;
        for (int i = 0; i < s.length(); i++) {
            cIdx = s[i] - 'a';
            if (idxMap[cIdx] == 0) {
                idxMap[cIdx] = i + 1;
            }
            maxLen = max(maxLen, i - idxMap[cIdx]);
        }
        return maxLen;
    }
};

/* EOF */
