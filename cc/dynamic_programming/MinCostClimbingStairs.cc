#include <vector>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 746. Min Cost Climbing Stairs
 * https://leetcode.com/problems/min-cost-climbing-stairs/
 */
class MinCostClimbingStairs {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        // return min(
        //     mcBruteForceRecursion(cost, cost.size() - 1),
        //     mcBruteForceRecursion(cost, cost.size() - 2)
        // );

        // return mcTopDownMemoization(cost);

        return mcBottomUpTabulation(cost);
    }
private:
    int mcBottomUpTabulation(vector<int>& cost) {
        vector<int> dp(cost.size() + 2);
        dp[0] = cost[0];
        dp[1] = cost[1];
        for (int i = 2; i < cost.size(); i++) {
            dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
        }
        return min(
            dp[cost.size() - 1],
            dp[cost.size() - 2]
        );
    }
    int mcTopDownMemoization(vector<int>& cost) {
        unordered_map<int, int> m;
        return min(
            mcTopDown(cost, cost.size() - 1, m),
            mcTopDown(cost, cost.size() - 2, m)
        );
    }
    int mcTopDown(vector<int>& cost, int i, unordered_map<int, int>& memo) {
        if (i < 0) {
            return 0;
        }
        if (i == 0 || i == 1) {
            return cost[i];
        }
        if (memo.find(i) != memo.end()) {
            return memo.find(i) -> second;
        }
        int r = cost[i] + min(
            mcTopDown(cost, i - 1, memo),
            mcTopDown(cost, i - 2, memo)
        );
        memo[i] = r;
        return memo[i];
    }
    int mcBruteForceRecursion(vector<int>& cost, int i) {
        if (i < 0) {
            return 0;
        }
        if (i == 0) {
            return cost[i];
        }
        if (i == 1) {
            return cost[i];
        }
        return cost[i] + min(
            mcBruteForceRecursion(cost, i - 1),
            mcBruteForceRecursion(cost, i - 2)
        );
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
