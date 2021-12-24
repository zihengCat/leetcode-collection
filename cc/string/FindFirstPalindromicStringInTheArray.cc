#include <vector>
#include <string>

using namespace std;

/**
 * LeetCode 2108. Find First Palindromic String in the Array
 * https://leetcode.com/problems/find-first-palindromic-string-in-the-array/
 */
class FindFirstPalindromicStringInTheArray {
public:
    string firstPalindrome(vector<string>& words) {
        for (int i = 0; i < words.size(); i++) {
            if (isPalindrome(words[i])) {
                return words[i];
            }
        }
        return "";
    }
private:
    bool isPalindrome(string& s) {
        for (int l = 0, r = s.size() - 1; l <= r; l++, r--) {
            if (s[l] != s[r]) {
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
