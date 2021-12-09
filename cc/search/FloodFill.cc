#include <vector>

using namespace std;

/**
 * LeetCode 733. Flood Fill
 * https://leetcode.com/problems/flood-fill/
 */
class FloodFill {
public:
    vector<vector<int> > floodFill(vector<vector<int> >& image, int sr, int sc, int newColor) {
        if (image[sr][sc] == newColor) {
            return image;
        }
        dfs(image, sr, sc, image[sr][sc], newColor);
        return image;
    }
    void dfs(vector<vector<int> >& image, int x, int y, int oldColor, int newColor) {
        if (!isValid(image, x, y)) {
            return;
        }
        if (image[x][y] != oldColor) {
            return;
        }
        int d[4][2] = {
            { 1, 0, },
            {-1, 0, },
            {0,  1, },
            {0, -1, },
        };
        int newX = 0;
        int newY = 0;
        image[x][y] = newColor;
        for (int i = 0; i < 4; i++) {
            newX = x + d[i][0];
            newY = y + d[i][1];
            dfs(image, newX, newY, oldColor, newColor);
        }
    }
private:
    bool isValid(vector<vector<int> >& image, int i, int j) {
        return i >= 0 && i < image.size()
            && j >= 0 && j < image[0].size();
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
