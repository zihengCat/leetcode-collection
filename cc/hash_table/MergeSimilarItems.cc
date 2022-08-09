#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

/**
 * LeetCode 2363. Merge Similar Items
 * https://leetcode.com/problems/merge-similar-items/
 */
class MergeSimilarItems {
public:
    vector<vector<int> > mergeSimilarItems(
        vector<vector<int> >& a,
        vector<vector<int> >& b
    ) {
        // Merge
        unordered_map<int, int> m;
        for (int i = 0; i < a.size(); i++) {
            m[a[i][0]] += a[i][1];
        }
        for (int i = 0; i < b.size(); i++) {
            m[b[i][0]] += b[i][1];
        }

        // Sort
        vector<int> v;
        for (unordered_map<int, int>::iterator iter = m.begin();
            iter != m.end();
            iter++
        ) {
            v.push_back(iter -> first);
        }
        sort(v.begin(), v.end());

        // Combine
        vector<vector<int> > vv;
        for (int i = 0; i < v.size(); i++) {
            vector<int> t;
            t.push_back(v[i]);
            t.push_back(m[v[i]]);
            vv.push_back(t);
        }
        return vv;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
