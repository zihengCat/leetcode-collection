#include <vector>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 169. Majority Element
 * https://leetcode.com/problems/majority-element/
 */
class MajorityElement {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            m[nums[i]]++;
        }
        int t = n / 2;
        for (unordered_map<int, int>::iterator iter = m.begin();
            iter != m.end();
            iter++
        ) {
            if (iter -> second > t) {
                return iter -> first;
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
