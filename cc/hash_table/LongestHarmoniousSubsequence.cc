#include <vector>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 594. Longest Harmonious Subsequence
 * https://leetcode.com/problems/longest-harmonious-subsequence/
 */
class LongestHarmoniousSubsequence {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> hmap;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            hmap[nums[i]]++;
        }
        int maximumLen = 0;
        for (unordered_map<int, int>::iterator iter = hmap.begin();
            iter != hmap.end();
            iter++
        ) {
            unordered_map<int, int>::iterator newIter = hmap.find(iter -> first + 1);
            if (newIter != hmap.end()) {
                maximumLen = findMax(maximumLen, iter -> second + newIter -> second);
            }
        }
        return maximumLen;
    }
private:
    int findMax(int a, int b) {
        return a > b ? a : b;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
