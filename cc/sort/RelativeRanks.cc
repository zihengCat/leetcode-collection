#include <vector>
#include <string>
#include <algorithm>

using namespace std;

/**
 * LeetCode 506. Relative Ranks
 * https://leetcode.com/problems/relative-ranks/
 */
class RelativeRanks {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<vector<int> > arr;
        vector<int> e(2, 0); // [val, idx]
        int n = score.size();
        for (int i = 0; i < n; i++) {
            e[0] = score[i];
            e[1] = i;
            arr.push_back(e);
        }
        sort(arr.begin(), arr.end(), cmp);
        vector<string> v(n, "");
        for (int i = 0; i < n; i++) {
            switch (i) {
            case 0:
                v[arr[i][1]] = "Gold Medal";
                break;
            case 1:
                v[arr[i][1]] = "Silver Medal";
                break;
            case 2:
                v[arr[i][1]] = "Bronze Medal";
                break;
            default:
                v[arr[i][1]] = to_string(i + 1);
                break;
            }
        }
        return v;
    }
    static bool cmp(const vector<int>& a, const vector<int>& b) {
        // decreasing order
        return a[0] > b[0];
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

