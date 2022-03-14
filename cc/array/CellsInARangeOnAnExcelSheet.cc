#include <vector>
#include <string>

using namespace std;

/**
 * LeetCode 2194. Cells in a Range on an Excel Sheet
 * https://leetcode.com/problems/cells-in-a-range-on-an-excel-sheet/
 */
class CellsInARangeOnAnExcelSheet {
public:
    vector<string> cellsInRange(string s) {
        vector<string> v;
        string t;
        char colStart = s[0];
        char colEnd = s[3];
        char rowStart = s[1];
        char rowEnd = s[4];
        for (char col = colStart; col <= colEnd; col++) {
            for (char row = rowStart; row <= rowEnd; row++) {
                t.clear();
                t.append(1, col);
                t.append(1, row);
                v.push_back(t);
                t.clear();
            }
        }
        return v;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
