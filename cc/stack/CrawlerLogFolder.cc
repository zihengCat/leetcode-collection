#include <string>
#include <vector>
#include <stack>

using namespace std;

/**
 * LeetCode 1598. Crawler Log Folder
 * https://leetcode.com/problems/crawler-log-folder/
 */
class Solution {
public:
    int minOperations(vector<string>& logs) {
        string parentDir = "../";
        string currentDir = "./";
        stack<string> aStack;
        int vLen = logs.size();
        for (int i = 0; i < vLen; i++) {
            if (logs[i] == currentDir) {
                // nothing to do...
            } else if (logs[i] == parentDir) {
                if (!aStack.empty()) {
                    aStack.pop();
                }
            } else {
                aStack.push(logs[i]);
            }
        }
        return aStack.size();
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
