#include <vector>

using namespace std;

/**
 * LeetCode 2078. Two Furthest Houses With Different Colors
 * https://leetcode.com/problems/two-furthest-houses-with-different-colors/
 */
class TwoFurthestHousesWithDifferentColors {
public:
    int maxDistance(vector<int>& colors) {
        return max(findLeft(colors), findRight(colors));
    }
private:
    int findLeft(vector<int>& colors) {
        int pLeft = 0;
        int pRight = colors.size() - 1;
        while (pRight >= pLeft) {
            if (colors[pRight] != colors[pLeft]) {
                return pRight - pLeft;
            }
            pRight--;
        }
        return -1;
    }
    int findRight(vector<int>& colors) {
        int pLeft = 0;
        int pRight = colors.size() - 1;
        while (pLeft <= pRight) {
            if (colors[pLeft] != colors[pRight]) {
                return pRight - pLeft;
            }
            pLeft++;
        }
        return -1;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
