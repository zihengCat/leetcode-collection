#include <vector>

using namespace std;

/**
 * LeetCode 463. Island Perimeter
 * https://leetcode.com/problems/island-perimeter/
 */
class IslandPerimeter {
public:
    int islandPerimeter(vector<vector<int> >& grid) {
        int count = 0;
        int repeat = 0;
        int rowLen = grid.size();
        int colLen = grid[0].size();
        for (int i = 0; i < rowLen; i++) {
            for (int j = 0; j < colLen; j++) {
                if (grid[i][j] == 1) {
                    count++;
                    if (i > 0 && grid[i - 1][j] == 1) {
                        repeat++;
                    }
                    if (j > 0 && grid[i][j - 1] == 1) {
                        repeat++;
                    }
                }
            }
        }
        return count * 4 - repeat * 2;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
