#include <vector>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 198. House Robber
 * https://leetcode.com/problems/house-robber/
 */
class HouseRobber {
public:
    int rob(vector<int>& nums) {
        // return robBruteForceRecursion(nums, nums.size() - 1);
        // return robTopDownMemoization(nums);
        return robBottomUpTabulation(nums);
    }
private:
    int robBottomUpTabulation(vector<int>& nums) {
        vector<int> dp(nums.size() + 1);
        dp[0] = 0;
        dp[1] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            dp[i + 1] = max(dp[i], dp[i - 1] + nums[i]);
        }
        return dp[nums.size()];
    }
    int robTopDownMemoization(vector<int>& nums) {
        unordered_map<int, int> m;
        return robTopDown(nums, nums.size() - 1, m);
    }
    int robTopDown(vector<int>& nums, int i, unordered_map<int, int>& memo) {
        if (i < 0) {
            return 0;
        }
        if (memo.find(i) != memo.end()) {
            return memo.find(i) -> second;
        }
        memo[i] = max(
            nums[i] + robTopDown(nums, i - 2, memo),
            robTopDown(nums, i - 1, memo)
        );
        return memo[i];
    }
    int robBruteForceRecursion(vector<int>& nums, int i) {
        if (i < 0) {
            return 0;
        }
        return max(
            nums[i] + robBruteForceRecursion(nums, i - 2),
            robBruteForceRecursion(nums, i - 1)
        );
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
