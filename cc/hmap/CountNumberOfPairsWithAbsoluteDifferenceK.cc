#include <vector>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 2006. Count Number of Pairs With Absolute Difference K
 * https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/
 */
class CountNumberOfPairsWithAbsoluteDifferenceK {
public:
    int countKDifference(vector<int>& nums, int k) {
        int cnt = 0;
        unordered_map<int, int> seen;
        int nLen = nums.size();
        for (int i = 0; i < nLen; i++) {
            int x = nums[i] + k;
            int y = nums[i] - k;
            if (seen.find(x) != seen.end()) {
                cnt += seen[x];
            }
            if (seen.find(y) != seen.end()) {
                cnt += seen[y];
            }
            seen[nums[i]]++;
        }
        return cnt;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
