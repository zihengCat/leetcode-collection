#include <vector>

using namespace std;

/**
 * LeetCode 2570. Merge Two 2D Arrays by Summing Values
 * https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values/
 */
class MergeTwo2DArraysBySummingValues {
public:
    vector<vector<int> > mergeArrays(
        vector<vector<int> >& a,
        vector<vector<int> >& b
    ) {
        vector<vector<int> > v;
        int ia = 0;
        int ib = 0;
        for (/* ... */; ia < a.size() && ib < b.size(); /* ... */) {
            if (a[ia][0] == b[ib][0]) {
                vector<int> t;
                t.push_back(a[ia][0]);
                t.push_back(a[ia][1] + b[ib][1]);
                v.push_back(t);
                ia++;
                ib++;
                continue;
            }
            if (a[ia][0] < b[ib][0]) {
                vector<int> t;
                t.push_back(a[ia][0]);
                t.push_back(a[ia][1]);
                v.push_back(t);
                ia++;
                continue;
            }
            if (a[ia][0] > b[ib][0]) {
                vector<int> t;
                t.push_back(b[ib][0]);
                t.push_back(b[ib][1]);
                v.push_back(t);
                ib++;
                continue;
            }
        }
        while (ia < a.size()) {
            vector<int> t;
            t.push_back(a[ia][0]);
            t.push_back(a[ia][1]);
            v.push_back(t);
            ia++;
        }
        while (ib < b.size()) {
            vector<int> t;
            t.push_back(b[ib][0]);
            t.push_back(b[ib][1]);
            v.push_back(t);
            ib++;
        }
        return v;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
