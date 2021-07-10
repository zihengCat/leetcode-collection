#include <vector>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 1791. Find Center of Star Graph
 * https://leetcode.com/problems/find-center-of-star-graph/
 */
class FindCenterOfStarGraph {
public:
    int findCenter(vector<vector<int> >& edges) {
        // return findCenterWithHashTable(edges);
        return findCenterWithCompare(edges);
    }
private:
    int findCenterWithCompare(vector<vector<int> >& e) {
        return e[0][0] == e[1][0] || e[0][0] == e[1][1]
            ? e[0][0]
            : e[0][1];
    }
    int findCenterWithHashTable(vector<vector<int> >& edges) {
        unordered_map<int, int> hmap;
        int n = edges.size();
        for (int i = 0; i < n; i++) {
            hmap[edges[i][0]]++;
            hmap[edges[i][1]]++;
        }
        for (unordered_map<int, int>::iterator iter = hmap.begin();
            iter != hmap.end();
            iter++
        ) {
            if (iter -> second == n) {
                return iter -> first;
            }
        }
        return 0;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
