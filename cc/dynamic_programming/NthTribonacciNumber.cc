#include <vector>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 1137. N-th Tribonacci Number
 * https://leetcode.com/problems/n-th-tribonacci-number/
 */
class NthTribonacciNumber {
public:
    int tribonacci(int n) {
        // return tribBruteForceRecursion(n);
        // return tribTopDownMemoization(n);
        return tribBottomUpTabulation(n);
    }
private:
    int tribBottomUpTabulation (int n) {
        vector<int> dp(n + 3);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        for (int i = 3; i <= n; i++) {
            dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
        }
        return dp[n];
    }
    int tribTopDownMemoization(int n) {
        unordered_map<int, int> m;
        return tribTopDown(n, m);
    }
    int tribTopDown(int n, unordered_map<int, int>& memo) {
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        if (n == 2) {
            return 1;
        }
        if (memo.find(n) != memo.end()) {
            return memo.find(n) -> second;
        }
        int v = tribTopDown(n - 1, memo)
                + tribTopDown(n - 2, memo)
                + tribTopDown(n - 3, memo);
        memo[n] = v;
        return memo[n];
    }
    int tribBruteForceRecursion(int n) {
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        if (n == 2) {
            return 1;
        }
        return tribBruteForceRecursion(n - 1)
            + tribBruteForceRecursion(n - 2)
            + tribBruteForceRecursion(n - 3);
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
