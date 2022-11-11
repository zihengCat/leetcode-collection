#include <vector>

using namespace std;

/**
 * LeetCode 2460. Apply Operations to an Array
 * https://leetcode.com/problems/apply-operations-to-an-array/
 */
class ApplyOperationsToAnArray {
public:
    vector<int> applyOperations(vector<int>& nums) {
        // Apply
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }
        // Move Zeros
        vector<int> v;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                v.push_back(nums[i]);
            }
        }
        int n = nums.size() - v.size();
        for (int i = 0; i < n; i++) {
            v.push_back(0);
        }
        return v;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
