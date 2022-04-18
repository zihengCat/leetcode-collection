#include <vector>
#include <unordered_set>

using namespace std;

/**
 * LeetCode 448. Find All Numbers Disappeared in an Array
 * https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
 */
class FindAllNumbersDisappearedInAnArray {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> v;
        unordered_set<int> s;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            s.insert(nums[i]);
        }
        for (int i = 1; i <= n; i++) {
            if (s.find(i) == s.end()) {
                v.push_back(i);
            }
        }
        return v;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
