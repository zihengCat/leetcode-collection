#include <vector>

using namespace std;

/**
 * LeetCode 1572. Matrix Diagonal Sum
 * https://leetcode.com/problems/matrix-diagonal-sum/
 */
class MatrixDiagonalSum {
public:
    int diagonalSum(vector<vector<int> >& mat) {
        int s = 0;
        int n = mat.size();
        for (int i = 0; i < n; i++) {
            // Square => Height * Width
            s += mat[i][i];
            s += mat[i][n - 1 - i];
        }
        if (n % 2 != 0) {
            // count center twice
            s -= mat[n / 2][n / 2];
        }
        return s;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
