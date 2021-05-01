#include <vector>
#include <string>

using namespace std;

/**
 * LeetCode 1441. Build an Array With Stack Operations
 * https://leetcode.com/problems/build-an-array-with-stack-operations/
 */
class BuildAnArrayWithStackOperations {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        string opPush = "Push";
        string opPop = "Pop";
        vector<string> vec;
        int idx = 0;
        int vLen = target.size();
        for (int i = 1; i <= n; i++) {
            if (i == target[idx]) {
                vec.push_back(opPush);
                idx++;
            } else {
                vec.push_back(opPush);
                vec.push_back(opPop);
            }
            if (idx == vLen) {
                break;
            }
        }
        return vec;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
