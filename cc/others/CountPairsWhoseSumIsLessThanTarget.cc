#include <vector>

using namespace std;

/**
 * LeetCode 2824. Count Pairs Whose Sum is Less than Target
 * https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/
 */
class CountPairsWhoseSumIsLessThanTarget {
public:
    int countPairs(vector<int>& nums, int target) {
        int cnt = 0;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (nums[i] + nums[j] < target) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
