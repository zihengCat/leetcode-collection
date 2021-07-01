#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 1897. Redistribute Characters to Make All Strings Equal
 * https://leetcode.com/problems/redistribute-characters-to-make-all-strings-equal/
 */
class RedistributeCharactersToMakeAllStringsEqual {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char, int> hmap;
        int vLen = words.size();
        for (int i = 0; i < vLen; i++) {
            int wLen = words[i].size();
            for (int j = 0; j < wLen; j++) {
                hmap[words[i][j]]++;
            }
        }
        for (unordered_map<char, int>::iterator iter = hmap.begin();
            iter != hmap.end();
            iter++
        ) {
            if (iter -> second % vLen != 0) {
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

