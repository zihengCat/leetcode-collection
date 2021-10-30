#include <vector>
#include <queue>
#include <utility>

#define Empty  0
#define Fresh  1
#define Rotten 2

using namespace std;

/**
 * LeetCode 994. Rotting Oranges
 * https://leetcode.com/problems/rotting-oranges/
 */
class RottingOranges {
public:
    int orangesRotting(vector<vector<int> >& grid) {
        int rowLen = grid.size();
        int colLen = grid[0].size();

        queue<pair<int, int> > q;
        int freshCnt = 0;
        for (int i = 0; i < rowLen; i++) {
            for (int j = 0; j < colLen; j++) {
                if (grid[i][j] == Fresh) {
                    freshCnt++;
                } else if (grid[i][j] == Rotten) {
                    q.push(pair<int, int>(i, j));
                }
            }
        }

        if (freshCnt == 0) {
            return 0;
        }

        int minuteCnt = 0;
        int dirs[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

        pair<int, int> e;
        int x = 0;
        int y = 0;
        int newX = 0;
        int newY = 0;
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                e = q.front();
                x = e.first;
                y = e.second;
                for (int j = 0; j < 4; j++) {
                    newX = x + dirs[j][0];
                    newY = y + dirs[j][1];
                    if (inGrid(newX, newY, grid)) {
                        if (grid[newX][newY] == Fresh) {
                            grid[newX][newY] = Rotten;
                            q.push(pair<int, int>(newX, newY));
                            freshCnt--;
                        }
                    }
                }
                q.pop();
            }
            minuteCnt++;
        }
        return freshCnt > 0 ? -1 : minuteCnt - 1;
    }
private:
    bool inGrid(int x, int y, vector<vector<int> >& grid) {
        return x >= 0 && x < grid.size()
            && y >= 0 && y < grid[0].size();
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
