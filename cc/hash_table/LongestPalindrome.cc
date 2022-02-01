#include <string>
#include <unordered_set>

using namespace std;

/**
 * LeetCode 409. Longest Palindrome
 * https://leetcode.com/problems/longest-palindrome/
 */
class LongestPalindrome {
public:
    int longestPalindrome(string s) {
        int cnt = 0;
        unordered_set<char> hset;
        unordered_set<char>::iterator iter;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            iter = hset.find(s[i]);
            if (iter != hset.end()) {
                cnt++;
                hset.erase(iter);
            } else {
                hset.insert(s[i]);
            }
        }
        return hset.size() > 0
            ? 2 * cnt + 1
            : 2 * cnt;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

