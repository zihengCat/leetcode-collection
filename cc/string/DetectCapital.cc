#include <string>

using namespace std;

/**
 * LeetCode 520. Detect Capital
 * https://leetcode.com/problems/detect-capital/
 */
class DetectCapital {
public:
    bool detectCapitalUse(string word) {
        return allLetterCaptial(word)
            || allLetterNotCaptial(word)
            || firstLetterCaptial(word);
    }
private:
    bool allLetterCaptial(string& s) {
        for (int i = 0; i < s.size(); i++) {
            if (!isUpperCase(s[i])) {
                return false;
            }
        }
        return true;
    }
    bool allLetterNotCaptial(string& s) {
        for (int i = 0; i < s.size(); i++) {
            if (!isLowerCase(s[i])) {
                return false;
            }
        }
        return true;
    }
    bool firstLetterCaptial(string& s) {
        char firstChar = s[0];
        for (int i = 1; i < s.size(); i++) {
            if (!isLowerCase(s[i])) {
                return false;
            }
        }
        return isUpperCase(firstChar);
    }
    bool isUpperCase(char c) {
        return c >= 'A' && c <= 'Z';
    }
    bool isLowerCase(char c) {
        return c >= 'a' && c <= 'z';
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
