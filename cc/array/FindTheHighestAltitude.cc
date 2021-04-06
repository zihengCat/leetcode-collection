#include <vector>

using namespace std;

/**
 * LeetCode 1732. Find the Highest Altitude
 * https://leetcode.com/problems/find-the-highest-altitude/
 */
class FindTheHighestAltitude {
public:
    int largestAltitude(vector<int>& gain) {
        if (gain.size() == 0) {
            return 0;
        }
        int arrLen = gain.size();
        int current = 0;
        int highest = 0;
        for (int i = 0; i < arrLen; i++) {
            current += gain[i];
            if (current > highest) {
                highest = current;
            }
        }
        return highest;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
