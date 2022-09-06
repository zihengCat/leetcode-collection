#include <string>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 91. Decode Ways
 * https://leetcode.com/problems/decode-ways/
 */
class DecodeWays {
public:
    int numDecodings(string s) {
        // return dpBruteForceRecursion(s, 0);
        unordered_map<int, int> memo;
        return dpTopDownMemoization(s, 0, memo);
    }
private:
    int dpTopDownMemoization(string& s, int i, unordered_map<int, int>& memo) {
        if (memo.find(i) != memo.end()) {
            return memo[i];
        }
        if (i == s.size()) {
            memo[i] = 1;
            return memo[i];
        }
        if (s[i] == '0') {
            memo[i] = 0;
            return memo[i];
        }

        int aSum = 0;
        aSum += dpTopDownMemoization(s, i + 1, memo); // Take One

        if (i < s.size() - 1 &&
            (s[i] == '1' || (s[i] == '2' && s[i + 1] < '7'))) {
            aSum += dpTopDownMemoization(s, i + 2, memo); // Take Two
        }

        memo[i] = aSum;
        return memo[i];
    }

    int dpBruteForceRecursion(string& s, int i) {
        if (i == s.size()) {
            return 1;
        }

        // leading zero => invalid
        if (s[i] == '0') {
            return 0;
        }

        int aSum = 0;
        aSum += dpBruteForceRecursion(s, i + 1); // Take One

        if (i < s.size() - 1 &&
            (s[i] == '1' || (s[i] == '2' && s[i + 1] < '7'))) {
            aSum += dpBruteForceRecursion(s, i + 2); // Take Two
        }

        return aSum;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
