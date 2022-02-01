#include <vector>
#include <unordered_set>

using namespace std;

/**
 * LeetCode 217. Contains Duplicate
 * https://leetcode.com/problems/contains-duplicate/
 */
class ContainsDuplicate {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for (int i = 0; i < nums.size(); i++) {
            if (s.find(nums[i]) != s.end()) {
                return true;
            }
            s.insert(nums[i]);
        }
        return false;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
