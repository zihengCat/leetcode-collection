#include <vector>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 697. Degree of an Array
 * https://leetcode.com/problems/degree-of-an-array/
 */
class DegreeOfAnArray {
public:
    int findShortestSubArray(vector<int>& nums) {
        // Build a HashTable => { num: orderedIndexArray[...] }
        // - [n]: {...iA...iB...iC...}
        // ...
        unordered_map<int, vector<int>> hmap;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            hmap[nums[i]].push_back(i);
        }
        int r = 0;
        int maxCnt = 0;
        for (unordered_map<int, vector<int>>::iterator iter = hmap.begin();
            iter != hmap.end();
            iter++
        ) {
            vector<int> *c = &(iter -> second);
            int cnt = c -> size();
            if (cnt > maxCnt) {
                maxCnt = cnt;
                r = c -> back() - c -> front() + 1;
            } else if (cnt == maxCnt) {
                int cLen = c -> back() - c -> front() + 1;
                if (cLen < r) {
                    r = cLen;
                }
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

