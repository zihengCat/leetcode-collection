#include <string>

using namespace std;

/**
 * LeetCode 680. Valid Palindrome II
 * https://leetcode.com/problems/valid-palindrome-ii/
 */
class ValidPalindromeII {
public:
    bool validPalindrome(string s) {
        return isValidPalindrome(s, 0, s.size() - 1, 0);
    }
private:
    bool isValidPalindrome(string& s, int left, int right, int cnt) {
        if (cnt > 1) {
            return false;
        }
        while (left < right) {
            if (s[left] == s[right]) {
                left++;
                right--;
            } else {
                return isValidPalindrome(s, left + 1, right, 1 + cnt)
                    || isValidPalindrome(s, left, right - 1, 1 + cnt);
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
