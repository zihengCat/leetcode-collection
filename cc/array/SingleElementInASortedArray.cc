#include <vector>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 540. Single Element in a Sorted Array
 * https://leetcode.com/problems/single-element-in-a-sorted-array/
 */
class SingleElementInASortedArray {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
        for (unordered_map<int, int>::iterator iter = m.begin(); iter != m.end(); iter++) {
            if (iter -> second == 1) {
                return iter -> first;
            }
        }
        return -1;
    }
};

/* EOF */
