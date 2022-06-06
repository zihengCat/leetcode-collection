#include <vector>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 70. Climbing Stairs
 * https://leetcode.com/problems/climbing-stairs/
 */
class ClimbingStairs {
public:
    int climbStairs(int n) {
        // return csBruteForceRecursion(n);
        // return csTopDownMemoization(n);
        return csBottomUpTabulation(n);
    }
private:
    int csBottomUpTabulation(int n) {
        vector<int> dp(n + 3);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        for (int i = 3; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
    int csTopDownMemoization(int n) {
        unordered_map<int, int> m;
        return csTopDown(n, m);
    }
    int csTopDown(int n, unordered_map<int, int>& memo) {
        if (n <= 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        if (n == 2) {
            return 2;
        }
        if (memo.find(n) != memo.end()) {
            return memo.find(n) -> second;
        }
        int r = csTopDown(n - 1, memo) + csTopDown(n - 2, memo);
        memo[n] = r;
        return memo[n];
    }
    int csBruteForceRecursion(int n) {
        if (n <= 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        if (n == 2) {
            return 2;
        }
        return csBruteForceRecursion(n - 1)
            + csBruteForceRecursion(n - 2);
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
