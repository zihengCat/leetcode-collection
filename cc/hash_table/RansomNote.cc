#include <string>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 383. Ransom Note
 * https://leetcode.com/problems/ransom-note/
 */
class RansomNote {
public:
    bool canConstruct(string sn, string sm) {
        unordered_map<char, int> m;
        for (int i = 0; i < sm.size(); i++) {
            m[sm[i]]++;
        }
        for (int i = 0; i < sn.size(); i++) {
            if (m[sn[i]] == 0) {
                return false;
            }
            m[sn[i]]--;
        }
        return true;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
