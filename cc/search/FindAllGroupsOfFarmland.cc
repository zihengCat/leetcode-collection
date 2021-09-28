#include <vector>

#define FORESTED 0
#define FARM     1
#define MARKED  -1

using namespace std;

/**
 * LeetCode 1992. Find All Groups of Farmland
 * https://leetcode.com/problems/find-all-groups-of-farmland/
 */
class FindAllGroupsOfFarmland {
public:
    vector<vector<int> > findFarmland(vector<vector<int> >& land) {
        vector<vector<int> > r;
        vector<int> t;
        int rowLen = land.size();
        int colLen = land[0].size();
        for (int i = 0; i < rowLen; i++) {
            for (int j = 0; j < colLen; j++) {
                if (land[i][j] == FARM) {
                    int eRow = i;
                    int eCol = j;
                    dfs(land, i, j, eRow, eCol);
                    t.clear();
                    t.push_back(i);
                    t.push_back(j);
                    t.push_back(eRow);
                    t.push_back(eCol);
                    r.push_back(t);
                }
            }
        }
        return r;
    }
private:
    void dfs(vector<vector<int> >& land, int sRow, int sCol, int& eRow, int& eCol) {
        if (sRow >= land.size()) {
            return;
        }
        if (sCol >= land[sRow].size()) {
            return;
        }
        if (land[sRow][sCol] != FARM) {
            return;
        }

        land[sRow][sCol] = MARKED;

        eRow = sRow > eRow ? sRow : eRow;
        eCol = sCol > eCol ? sCol : eCol;

        dfs(land, sRow + 1, sCol, eRow, eCol);
        dfs(land, sRow, sCol + 1, eRow, eCol);
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
