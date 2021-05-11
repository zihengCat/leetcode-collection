#include <vector>

using namespace std;

/**
 * LeetCode 1423. Maximum Points You Can Obtain from Cards
 * https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/
 */
class MaximumPointsYouCanObtainFromCards {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int windowSum = 0;
        for (int i = n - k; i < n; i++) {
            windowSum += cardPoints[i]; // take all cards from right
        }
        int maxSum = windowSum; // assume maximum points
        for (int i = 0; i < k; i++) {
            windowSum -= cardPoints[n - k + i];
            windowSum += cardPoints[i];
            maxSum = max(maxSum, windowSum);
        }
        return maxSum;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
