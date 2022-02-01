#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * LeetCode 1446. Consecutive Characters
 * https://leetcode.com/problems/consecutive-characters/
 */
class ConsecutiveCharacters {
public:
    int maxPower(string s) {
        vector<int> v(26, 0);
        int sIdx = 0;
        int cLen = 0;
        char c = 0;
        int n = s.size();
        for (int i = 0; i < n; /* ... */) {
            sIdx = i;
            c = s[sIdx];
            while (i < n && s[i] == c) { // find consecutive characters length
                i++;
            }
            cLen = i - sIdx;
            if (cLen > v[c - 'a']) {
                v[c - 'a'] = cLen;
            }
        }
        return *max_element(v.begin(), v.end());
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

