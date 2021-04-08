#include <string>
#include <unordered_set>

using namespace std;

/**
 * LeetCode 1704. Determine if String Halves Are Alike
 * https://leetcode.com/problems/determine-if-string-halves-are-alike/
 */
class DetermineIfStringHalvesAreAlike {
public:
    bool halvesAreAlike(string s) {
        if (s.length() % 2 != 0) {
            return false;
        }
        char vowels[] = {
            'a', 'e', 'i', 'o', 'u',
            'A', 'E', 'I', 'O', 'U',
        };
        unordered_set<char> vowelsSet;
        for (int i = 0; i < 10; i++) {
            vowelsSet.insert(vowels[i]);
        }
        int aCnt = 0;
        int bCnt = 0;
        int sLen = s.size();
        int sHalf = sLen / 2;
        for (int pA = 0, pB = sHalf;
            pA < sHalf && pB < sLen;
            pA++, pB++
        ) {
            if (vowelsSet.find(s[pA]) != vowelsSet.end()) {
                aCnt++;
            }
            if (vowelsSet.find(s[pB]) != vowelsSet.end()) {
                bCnt++;
            }
        }
        return aCnt == bCnt;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
