#include <vector>
#include <unordered_set>

using namespace std;

/**
 * LeetCode 2133. Check if Every Row and Column Contains All Numbers
 * https://leetcode.com/problems/check-if-every-row-and-column-contains-all-numbers/
 */
class CheckIfEveryRowAndColumnContainsAllNumbers {
public:
    bool checkValid(vector<vector<int> >& matrix) {
        int n = matrix.size();
        for (int i = 0; i < n; i++) {
            if (!checkRow(matrix, i) || !checkCol(matrix, i)) {
                return false;
            }
        }
        return true;
    }
private:
    bool checkRow(vector<vector<int> >& matrix, int i) {
        unordered_set<int> s;
        for (int j = 0; j < matrix[i].size(); j++) {
            s.insert(matrix[i][j]);
        }
        return s.size() == matrix[i].size();
    }
    bool checkCol(vector<vector<int> >& matrix, int i) {
        unordered_set<int> s;
        for (int j = 0; j < matrix.size(); j++) {
            s.insert(matrix[j][i]);
        }
        return s.size() == matrix.size();
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
