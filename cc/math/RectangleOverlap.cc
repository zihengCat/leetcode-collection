#include <vector>

using namespace std;

/**
 * LeetCode 836. Rectangle Overlap
 * https://leetcode.com/problems/rectangle-overlap/
 */
class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        vector<int[2]> arr1, arr2;
        addPoints(rec1, arr1);
        addPoints(rec2, arr2);
        return isOverlap(rec1, arr2)
            || isOverlap(rec2, arr1);
    }
private:
    bool isOverlap(vector<int>& rec, vector<int[2]>& arr) {
        for (int i = 0; i < arr.size(); i++) {
            if (pointOverlap(rec, arr[i])) {
                return true;
            }
        }
        return false;
    }
    void addPoints(vector<int>& rec, vector<int[2]>& arr) {
        arr.clear();
        int pBottomLeft[2] = {rec[0], rec[1],};
        int pBottomRight[2] = {rec[2], rec[1],};
        int pTopLeft[2] = {rec[0], rec[3],};
        int pTopRight[2] = {rec[2], rec[3],};
        arr.push_back(pBottomLeft);
        arr.push_back(pBottomRight);
        arr.push_back(pTopLeft);
        arr.push_back(pTopRight);
    }
    bool pointOverlap(vector<int>& rec, int p[2]) {
        return false;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
