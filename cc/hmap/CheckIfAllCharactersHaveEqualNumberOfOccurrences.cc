#include <string>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 1941. Check if All Characters Have Equal Number of Occurrences
 * https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/
 */
class CheckIfAllCharactersHaveEqualNumberOfOccurrences {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> hmap;
        for (int i = 0; i < s.size(); i++) {
            hmap[s[i]]++;
        }
        int freq = hmap[s[0]];
        for (unordered_map<char, int>::iterator iter = hmap.begin();
            iter != hmap.end();
            iter++
        ) {
            if (iter -> second != freq) {
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
