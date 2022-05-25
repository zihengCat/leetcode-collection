#include <string>
#include <stack>

using namespace std;

/**
 * LeetCode 20. Valid Parentheses
 * https://leetcode.com/problems/valid-parentheses/
 */
class ValidParentheses {
public:
    bool isValid(string s) {
        stack<char> sc;
        for (int i = 0; i < s.size(); i++) {
            switch (s[i]) {
            case ')':
            case ']':
            case '}':
                if (sc.size() == 0) {
                    return false;
                }
                if (sc.top() != findPair(s[i])) {
                    return false;
                }
                sc.pop();
                break;
            default:
                sc.push(s[i]);
                break;
            }
        }
        return sc.size() == 0;
    }
private:
    char findPair(char c) {
        switch (c) {
        case ')':
            return '(';
        case ']':
            return '[';
        case '}':
            return '{';
        default:
            return '-';
        }
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
