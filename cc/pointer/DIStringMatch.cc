#include <vector>
#include <string>

using namespace std;

/**
 * LeetCode 942. DI String Match
 * https://leetcode.com/problems/di-string-match/
 */
class DIStringMatch {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        int low = 0, high = n;
        vector<int> v(n + 1, 0);
        for (int i = 0; i < n; i++) {
            switch (s[i]) {
            case 'I':
                v[i] = low;
                low++;
                break;
            case 'D':
                v[i] = high;
                high--;
                break;
            default:
                break;
            }
        }
        v[n] = low;
        return v;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
