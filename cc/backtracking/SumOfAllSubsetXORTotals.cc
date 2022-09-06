#include <vector>

using namespace std;

/**
 * LeetCode 1863. Sum of All Subset XOR Totals
 * https://leetcode.com/problems/sum-of-all-subset-xor-totals/
 */
class SumOfAllSubsetXORTotals {
public:
    int subsetXORSum(vector<int>& nums) {
        return dp(nums, 0, 0);
    }
private:
    int dp(vector<int>& arr, int i, int cur) {
        if (i == arr.size()) {
            return cur;
        }
        int eWith = dp(arr, i + 1, cur ^ arr[i]);
        int eWithout = dp(arr, i + 1, cur);
        return eWith + eWithout;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
