#include <vector>

using namespace std;

/**
 * LeetCode 1103. Distribute Candies to People
 * https://leetcode.com/problems/distribute-candies-to-people/
 */
class DistributeCandiesToPeople {
public:
    vector<int> distributeCandies(int candies, int nums) {
        vector<int> arr(nums, 0);
        int cnt = 1;
        while (candies > 0) {
            for (int i = 0; i < nums; i++) {
                if (candies >= cnt) {
                    arr[i] += cnt;
                    candies -= cnt;
                    cnt++;
                } else {
                    arr[i] += candies;
                    candies -= candies;
                }
            }
        }
        return arr;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
