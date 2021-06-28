#include <vector>
#include <unordered_set>

using namespace std;

/**
 * LeetCode 41. First Missing Positive
 * https://leetcode.com/problems/first-missing-positive/
 */
class FirstMissingPositive {
public:
    int firstMissingPositive(vector<int>& nums) {
        return firstMissingPositiveWithHashTable(nums);
    }
private:
    /**
     * Time complexity: O(n)
     * Space complexity: O(n)
     */
    int firstMissingPositiveWithHashTable(vector<int>& nums) {
        unordered_set<int> hset;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) { // skip duplicates or non-positive integers
                hset.insert(nums[i]);
            }
        }
        for (int i = 1; i < INT32_MAX; i++) {
            if (hset.find(i) == hset.end()) {
                return i;
            }
        }
        return 0;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

