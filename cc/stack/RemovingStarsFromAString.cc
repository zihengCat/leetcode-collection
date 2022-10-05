#include <string>

using namespace std;

/**
 * LeetCode 2390. Removing Stars From a String
 * https://leetcode.com/problems/removing-stars-from-a-string/
 */
class RemovingStarsFromAString {
public:
    string removeStars(string s) {
        string r;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '*') {
                r.pop_back();
            } else {
                r.push_back(s[i]);
            }
        }
        return r;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
