#include <vector>
#include <unordered_set>

using namespace std;

/**
 * LeetCode 287. Find the Duplicate Number
 * https://leetcode.com/problems/find-the-duplicate-number/
 */
class FindTheDuplicateNumber {
public:
    int findDuplicate(vector<int>& nums) {
        return findDuplicateWithHash(nums);
    }
private:
    int findDuplicateWithHash(vector<int>& nums) {
        unordered_set<int> s;
        for (int i = 0; i < nums.size(); i++) {
            if (s.find(nums[i]) != s.end()) {
                return nums[i];
            }
            s.insert(nums[i]);
        }
        return 0;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
