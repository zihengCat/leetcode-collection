#include <vector>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 1640. Check Array Formation Through Concatenation
 * https://leetcode.com/problems/check-array-formation-through-concatenation/
 */
class CheckArrayFormationThroughConcatenation {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        unordered_map<int, vector<int>* > hmap;
        unordered_map<int, vector<int>* >::iterator iter;
        // Build a Hash Table =>
        // {
        //   [nA]: [nA, nB, nC, ...nN],
        //   ...
        // }
        int n = pieces.size();
        for (int i = 0; i < n; i++) {
            hmap[pieces[i][0]] = &pieces[i];
        }
        // forEach check
        n = arr.size();
        for (int i = 0; i < n; /* ... */) {
            iter = hmap.find(arr[i]);
            if (iter == hmap.end()) {
                return false;
            }
            int sIdx = i;
            int vLen = iter -> second -> size();
            for (int j = 0; j < vLen; j++) {
                if (arr[sIdx + j] != (*(iter -> second))[j]) {
                    return false;
                }
                i++;
            }
        }
        return true;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

