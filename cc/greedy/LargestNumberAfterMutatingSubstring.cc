#include <string>
#include <vector>

using namespace std;

/**
 * LeetCode 1946. Largest Number After Mutating Substring
 * https://leetcode.com/problems/largest-number-after-mutating-substring/
 */
class LargestNumberAfterMutatingSubstring {
public:
    string maximumNumber(string num, vector<int>& change) {
        string r = string(num);
        bool changed = false;
        int before = 0, after = 0;
        int n = num.size();
        for (int i = 0; i < n; i++) {
            before = num[i] - '0';
            after = change[before];
            if (after == before) {
                continue;
            } else if (after < before) {
                if (changed) {
                    break;
                }
                continue;
            } else if (after > before) {
                r[i] = after + '0';
                changed = true;
            }
        }
        return r;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
