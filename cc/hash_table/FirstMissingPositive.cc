#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

/**
 * LeetCode 41. First Missing Positive
 * https://leetcode.com/problems/first-missing-positive/
 */
class FirstMissingPositive {
public:
    int firstMissingPositive(vector<int>& nums) {
        // return firstMissingPositiveWithHashTable(nums);
        return firstMissingPositiveWithSort(nums);
    }
private:
    /**
     * Time complexity: O(n*log(n))
     * Space complexity: O(1)
     */
    int firstMissingPositiveWithSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int idx = 0;
        int vLen = nums.size();
        for (int i = 0; i < vLen; i++) {
            if (nums[i] > 0) { // find first non-negative integer index
                idx = i;
                break;
            }
        }
        for (int n = 1; n < INT32_MAX; n++) {
            if (idx == vLen) {
                return n;
            }
            if (n != nums[idx]) {
                return n;
            }
            while (idx < vLen && nums[idx] == n) { // skip duplicates
                idx++;
            }
        }
        return 0;
    }
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

