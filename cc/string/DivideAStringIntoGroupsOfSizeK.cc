#include <vector>
#include <string>

using namespace std;

/**
 * LeetCode 2138. Divide a String Into Groups of Size k
 * https://leetcode.com/problems/divide-a-string-into-groups-of-size-k/
 */
class DivideAStringIntoGroupsOfSizeK {
public:
    vector<string> divideString(string s, int k, char f) {
        vector<string> v;
        string t;
        int i = 0;
        int sz = s.size();
        for (/* ... */; i + k < sz; i += k) {
            for (int j = 0; j < k; j++) {
                t.append(1, s[i + j]);
            }
            v.push_back(t);
            t.clear();
        }
        if (i < sz) {
            for (int j = 0; j < k; j++) {
                if (i + j < sz) {
                    t.append(1, s[i + j]);
                } else {
                    t.append(1, f);
                }
            }
            v.push_back(t);
            t.clear();
        }
        return v;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
