#include <string>

using namespace std;

/**
 * LeetCode 1876. Substrings of Size Three with Distinct Characters
 * https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/
 */
class SubstringsOfSizeThreeWithDistinctCharacters {
public:
    int countGoodSubstrings(string s) {
        if (s.size() < 3) {
            return 0;
        }
        int cnt = 0;
        char x, y, z;
        int n = s.size();
        for (int wStart = 0, wEnd = 2;
            wEnd < n;
            wStart++, wEnd++
        ) {
            x = s[wStart];
            y = s[wStart + 1];
            z = s[wEnd];
            if (x != y && x != z && y != z) {
                cnt++;
            }
        }
        return cnt;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
