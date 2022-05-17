#include <vector>
#include <string>

using namespace std;

/**
 * LeetCode 1981. Minimize the Difference Between Target and Chosen Elements
 * https://leetcode.com/problems/minimize-the-difference-between-target-and-chosen-elements/
 */
class MinimizeTheDifferenceBetweenTargetAndChosenElements {
public:
    int minimizeTheDifference(vector<vector<int> >& mat, int target) {
        int memo[5000][80];
        memset(memo, -1, sizeof(memo));
        return findDiff(memo, mat, target, 0, 0);
    }
private:
    int abs(int n) {
        return n > 0 ? n : -n;
    }
    int findDiff(
        int memo[5000][80],
        vector<vector<int> >& mat, int target,
        int cRow, int sum
    ) {
        int row = mat.size();
        int col = mat[0].size();
        if (cRow >= row) {
            return abs(target - sum);
        }
        if (memo[sum][cRow] > -1) {
            return memo[sum][cRow];
        }
        int minDiff = INT32_MAX;
        for (int i = 0; i < col; i++) {
            minDiff = min(minDiff, findDiff(
                memo, mat, target,
                cRow + 1, sum + mat[cRow][i]
            ));
        };
        memo[sum][cRow] = minDiff;
        return minDiff;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
