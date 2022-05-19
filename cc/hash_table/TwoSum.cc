#include <vector>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 1. Two Sum
 * https://leetcode.com/problems/two-sum/
 */
class TwoSum {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int, int> m;
        unordered_map<int, int>::iterator iter;
        for (int i = 0; i < nums.size(); i++) {
            iter = m.find(target - nums[i]);
            if (iter != m.end()) {
                v.push_back(iter -> second);
                v.push_back(i);
                return v;
            }
            m[nums[i]] = i;
        }
        return v;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
