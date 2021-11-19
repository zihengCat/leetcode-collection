#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

/**
 * LeetCode 2070. Most Beautiful Item for Each Query
 * https://leetcode.com/problems/most-beautiful-item-for-each-query/
 */
class MostBeautifulItemForEachQuery {
public:
    vector<int> maximumBeauty(vector<vector<int> >& items, vector<int>& queries) {
        vector<pair<int, int> > q;
        for (int i = 0; i < queries.size(); i++) {
            q.push_back(pair<int, int>(queries[i], i)); // {value: index}
        }
        sort(items.begin(), items.end());
        sort(q.begin(), q.end());
        vector<int> r(q.size());
        int maxBeauty = 0;
        int n = q.size();
        int itemIdx = 0;
        for (int i = 0; i < n; i++) {
            int qPrice = q[i].first;
            int qIdx = q[i].second;
            // Iterate over items, stop when the price exceeds query price or no item left
            while (itemIdx < items.size() && items[itemIdx][0] <= qPrice) {
                maxBeauty = max(maxBeauty, items[itemIdx][1]);
                itemIdx++;
            }
            r[qIdx] = maxBeauty;
        }
        return r;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
