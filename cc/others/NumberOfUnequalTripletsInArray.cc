#include <vector>

using namespace std;

/**
 * LeetCode 2475. Number of Unequal Triplets in Array
 * https://leetcode.com/problems/number-of-unequal-triplets-in-array/
 */
class NumberOfUnequalTripletsInArray {
public:
    int unequalTriplets(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (nums[i] != nums[j]
                        && nums[i] != nums[k]
                        && nums[j] != nums[k]) {
                        cnt++;
                    }
                }
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
