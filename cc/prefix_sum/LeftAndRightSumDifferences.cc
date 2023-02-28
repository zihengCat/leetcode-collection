#include <vector>

using namespace std;

/**
 * LeetCode 2574. Left and Right Sum Differences
 * https://leetcode.com/problems/left-and-right-sum-differences/description/
 */
class LeftAndRightSumDifferences {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ll;
        vector<int> rr;
        int lSum = 0;
        int rSum = 0;
        for (int i = 0, j = nums.size() - 1; i < nums.size() && j >= 0; i++, j--) {
            ll.push_back(lSum);
            lSum += nums[i];
            rr.insert(rr.begin(), rSum);
            rSum += nums[j];
        }
        vector<int> d;
        for (int i = 0; i < nums.size(); i++) {
            d.push_back(abs(ll[i] - rr[i]));
        }
        return d;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
