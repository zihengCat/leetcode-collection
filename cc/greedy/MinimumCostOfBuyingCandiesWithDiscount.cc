#include <vector>

using namespace std;

/**
 * LeetCode 2144. Minimum Cost of Buying Candies With Discount
 * https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/
 */
class MinimumCostOfBuyingCandiesWithDiscount {
public:
    int minimumCost(vector<int>& cost) {
        vector<int> v(cost);
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end()); // decreasing order
        int minCost = 0;
        for (int i = 0; i < v.size(); i++) {
            if ((i + 1) % 3 == 0) {
                continue; // free
            }
            minCost += v[i];
        }
        return minCost;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
