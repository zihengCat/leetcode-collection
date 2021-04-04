#include <vector>
#include <stdlib.h>
#include <limits.h>

using namespace std;

/**
 * LeetCode 1779. Find Nearest Point That Has the Same X or Y Coordinate
 * https://leetcode.com/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate/
 */
class FindNearestPointThatHasTheSameXOrYCoordinate {
public:
    int nearestValidPoint(int x, int y, vector<vector<int> >& points) {
        if (points.size() == 0) {
            return -1;
        }
        int nearestIdx = -1;
        int minDis = INT32_MAX;
        vector<int> pointT;
        pointT.push_back(x);
        pointT.push_back(y);
        int len = points.size();
        for (int i = 0; i < len; i++) {
            if (points[i][0] == x || points[i][1] == y) {
                int currentDis = calculateManhattanDistance(pointT, points[i]);
                if (currentDis < minDis) {
                    minDis = currentDis;
                    nearestIdx = i;
                }
            }
        }
        return nearestIdx;

    }
private:
    int calculateManhattanDistance(vector<int>& pA, vector<int>& pB) {
        return abs(pA[0] - pB[0]) + abs(pA[1] - pB[1]);
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
