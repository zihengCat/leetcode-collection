#include <vector>

using namespace std;

/**
 * LeetCode 1431. Kids With the Greatest Number of Candies
 * https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
 */
class KidsWithTheGreatestNumberOfCandies {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> vec(n, false);
        int maxVal = INT32_MIN;
        for (int i = 0; i < n; i++) {
            if (candies[i] > maxVal) {
                maxVal = candies[i];
            }
        }
        for (int i = 0; i < n; i++) {
            vec[i] = candies[i] + extraCandies >= maxVal;
        }
        return vec;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

