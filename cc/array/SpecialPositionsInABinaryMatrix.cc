#include <vector>

using namespace std;

/**
 * LeetCode 1582. Special Positions in a Binary Matrix
 * https://leetcode.com/problems/special-positions-in-a-binary-matrix/
 */
class SpecialPositionsInABinaryMatrix {
public:
    int numSpecial(vector<vector<int> >& mat) {
        int cnt = 0;
        int rowLen = mat.size();
        int colLen = mat[0].size();
        for (int i = 0; i < rowLen; i++) {
            for (int j = 0; j < colLen; j++) {
                if (mat[i][j] == 1) {
                    if (isSpecialRow(mat, i, j)
                        && isSpecialCol(mat, i, j)) {
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
private:
    bool isSpecialRow(vector<vector<int> >& mat, int rowIdx, int colIdx) {
        int rowLen = mat[rowIdx].size();
        int i = 0;
        for (i = 0; i < colIdx; i++) {
            if (mat[rowIdx][i] != 0) {
                return false;
            }
        }
        for (i = colIdx + 1; i < rowLen; i++) {
            if (mat[rowIdx][i] != 0) {
                return false;
            }
        }
        return true;
    }
    bool isSpecialCol(vector<vector<int> >& mat, int rowIdx, int colIdx) {
        int colLen = mat.size();
        int i = 0;
        for (i = 0; i < rowIdx; i++) {
            if (mat[i][colIdx] != 0) {
                return false;
            }
        }
        for (i = rowIdx + 1; i < colLen; i++) {
            if (mat[i][colIdx] != 0) {
                return false;
            }
        }
        return true;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */ 
