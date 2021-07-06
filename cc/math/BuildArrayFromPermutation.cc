#include <vector>

using namespace std;

/**
 * LeetCode 1920. Build Array from Permutation
 * https://leetcode.com/problems/build-array-from-permutation/
 */
class BuildArrayFromPermutation {
public:
    vector<int> buildArray(vector<int>& nums) {
        return buildArrayWithAllocation(nums);
    }
private:
    vector<int> buildArrayWithAllocation(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n, 0);
        for (int i = 0; i < n; i++) {
            v[i] = nums[nums[i]];
        }
        return v;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

