#include <vector>
#include <string>
#include <stack>
#include <unordered_set>

#define TYPE_NUM 0
#define TYPE_OP  1

using namespace std;

/**
 * LeetCode 150. Evaluate Reverse Polish Notation
 * https://leetcode.com/problems/evaluate-reverse-polish-notation/
 */
class EvaluateReversePolishNotation {
public:
    int evalRPN(vector<string>& tokens) {
        init();
        stack<int> s;
        int n = tokens.size();
        for (int i = 0; i < n; i++) {
            switch (findType(tokens[i])) {
            case TYPE_NUM:
                s.push(stoi(tokens[i]));
                break;
            case TYPE_OP:
                doOperation(s, tokens[i]);
                break;
            default:
                break;
            }
        }
        return s.top();
    }
private:
    unordered_set<string> opSet;
    void init() {
        opSet.insert("+");
        opSet.insert("-");
        opSet.insert("*");
        opSet.insert("/");
    }
    void doOperation(stack<int>& s, string& op) {
        int a = s.top(); s.pop();
        int b = s.top(); s.pop();
        if (op == "+") {
            s.push(b + a);
        } else if (op == "-") {
            s.push(b - a);
        } else if (op == "*") {
            s.push(b * a);
        } else if (op == "/") {
            s.push(b / a);
        }
    }
    int findType(string& token) {
        if (opSet.find(token) != opSet.end()) {
            return TYPE_OP;
        }
        return TYPE_NUM;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
