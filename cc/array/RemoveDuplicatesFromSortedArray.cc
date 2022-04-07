#include <vector>
#include <unordered_set>

using namespace std;

/**
 * LeetCode 26. Remove Duplicates from Sorted Array
 * https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 */
class RemoveDuplicatesFromSortedArray {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> s;
        int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (s.find(nums[j]) == s.end()) {
                s.insert(nums[j]);
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
