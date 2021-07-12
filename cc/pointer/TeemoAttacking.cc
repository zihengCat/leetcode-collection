#include <vector>

using namespace std;

/**
 * LeetCode 495. Teemo Attacking
 * https://leetcode.com/problems/teemo-attacking/
 */
class TeemoAttacking {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int pDuration = 0;
        int pStart = timeSeries[0];
        int pEnd = pStart + duration;
        int n = timeSeries.size();
        for (int i = 1; i < n; i++) {
            if (timeSeries[i] > pEnd) {
                pDuration += pEnd - pStart;
                pStart = timeSeries[i];
            }
            pEnd = timeSeries[i] + duration;
        }
        pDuration += pEnd - pStart;
        return pDuration;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
