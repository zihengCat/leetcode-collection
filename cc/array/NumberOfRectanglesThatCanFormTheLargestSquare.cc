#include <vector>
#include <algorithm>

using namespace std;

/**
 * LeetCode 1725. Number Of Rectangles That Can Form The Largest Square
 * https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square/
 */
class NumberOfRectanglesThatCanFormTheLargestSquare {
public:
    int countGoodRectangles(vector<vector<int> >& rectangles) {
        int vLen = rectangles.size();
        int maxLen = 0;
        int cnt = 0;
        vector<int> *p;
        for (int i = 0; i < vLen; i++) {
            p = &rectangles[i];
            int currentLen = min((*p)[0], (*p)[1]);
            if (currentLen > maxLen) {
                maxLen = currentLen;
                cnt = 1;
            } else if (currentLen == maxLen) {
                cnt++;
            }
        }
        return cnt;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
