#include <vector>
#include <string>

using namespace std;

/**
 * LeetCode 830. Positions of Large Groups
 * https://leetcode.com/problems/positions-of-large-groups/
 */
class PositionsOfLargeGroups {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> vec;
        int startIdx = 0;
        char c = 0;
        int n = s.size();
        for (int i = 0; i < n; /* ... */) {
            startIdx = i;
            c = s[startIdx];
            while (i < n && s[i] == c) {
                i++;
            }
            if (i - startIdx >= 3) {
                vector<int> v;
                v.push_back(startIdx);
                v.push_back(i - 1);
                vec.push_back(v);
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

