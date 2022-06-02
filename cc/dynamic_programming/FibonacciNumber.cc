#include <unordered_map>
#include <vector>

using namespace std;

/**
 * LeetCode 509. Fibonacci Number
 * https://leetcode.com/problems/fibonacci-number/
 */
class FibonacciNumber {
public:
    int fib(int n) {
        // return fibBruteForceRecursion(n);
        // return fibTopDownMemoization(n);
        return fibBottomUpTabulation(n);
    }
private:
    int fibBottomUpTabulation(int n) {
        vector<int> dp(n + 2);
        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
    int fibTopDownMemoization(int n) {
        unordered_map<int, int> m;
        return fibTopDown(n, m);
    }
    int fibTopDown(int n, unordered_map<int, int>& memo) {
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        if (memo.find(n) != memo.end()) {
            return memo.find(n) -> second;
        }
        int r = fibTopDown(n - 1, memo) + fibTopDown(n - 2, memo);
        memo[n] = r;
        return memo[n];
    }
    int fibBruteForceRecursion(int n) {
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        return fibBruteForceRecursion(n - 1)
            + fibBruteForceRecursion(n - 2);
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
