#include <vector>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 219. Contains Duplicate II
 * https://leetcode.com/problems/contains-duplicate-ii/
 */
class ContainsDuplicateII {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> hMap;
        unordered_map<int, int>::iterator iter;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            iter = hMap.find(nums[i]);
            if (iter != hMap.end()) {
                if (i - iter -> second <= k) {
                    return true;
                }
            }
            hMap[nums[i]] = i;
        }
        return false;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
