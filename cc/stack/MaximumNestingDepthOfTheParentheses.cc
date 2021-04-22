#include <string>
#include <deque>

using namespace std;

/**
 * LeetCode 1614. Maximum Nesting Depth of the Parentheses
 * https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
 */
class MaximumNestingDepthOfTheParentheses {
public:
    int maxDepth(string s) {
        int currentDepth = 0;
        int maximumDepth = 0;
        deque<char> aStack;
        for (int i = 0; i < s.size(); i++) {
            switch (s[i]) {
            case '(':
                aStack.push_back('(');
                currentDepth++;
                break;
            case ')':
                aStack.pop_back();
                currentDepth--;
                break;
            default:
                break;
            }
            maximumDepth = max(maximumDepth, currentDepth);
        }
        return maximumDepth;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
