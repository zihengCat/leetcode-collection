#include <string>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 389. Find the Difference
 * https://leetcode.com/problems/find-the-difference/
 */
class FindTheDifference {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> m;
        for (int i = 0; i < t.size(); i++) {
            m[t[i]]++;
        }
        for (int i = 0; i < s.size(); i++) {
            m[s[i]]--;
        }
        for (unordered_map<char, int>::iterator iter = m.begin();
            iter != m.end(); iter++) {
            if (iter -> second == 1) {
                return iter -> first;
            }
        }
        return 0;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
