#include <string>

using namespace std;

#define NODE_ERROR         (-1)
#define NODE_UNKNOWN        (0)
#define NODE_G              (1)
#define NODE_PARENTHESES    (2)
#define NODE_PARENTHESES_AL (3)

/**
 * LeetCode 1678. Goal Parser Interpretation
 * https://leetcode.com/problems/goal-parser-interpretation/
 */
class GoalParserInterpretation {
public:
    string interpret(string command) {
        if (command.size() == 0) {
            return command;
        }
        int sLen = command.size();
        string s;
        for (int i = 0; i < sLen; /* ... */) {
            switch (findNodeType(command, i)) {
            case NODE_G:
                s.append("G");
                i += 1;
                break;
            case NODE_PARENTHESES:
                s.append("o");
                i += 2;
                break;
            case NODE_PARENTHESES_AL:
                s.append("al");
                i += 4;
                break;
            default:
                // Error
                return "";
            }
        }
        return s;
    }
private:
    int findNodeType(string& s, int idx) {
        if (idx >= s.size()) {
            return NODE_ERROR;
        }
        switch (s[idx]) {
        case 'G':
            return NODE_G;
        case '(':
            if (idx + 1 < s.size()) {
                switch (s[idx + 1]) {
                case ')':
                    return NODE_PARENTHESES;
                case 'a':
                    return NODE_PARENTHESES_AL;
                default:
                    break;
                }
            }
            break;
        default:
            break;
        }
        return NODE_UNKNOWN;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
