#include <vector>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 2206. Divide Array Into Equal Pairs
 * https://leetcode.com/problems/divide-array-into-equal-pairs/
 */
class DivideArrayIntoEqualPairs {
public:
    bool divideArray(vector<int>& nums) {
        if (nums.size() % 2 != 0) {
            return false;
        }
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
        for (unordered_map<int, int>::iterator iter = m.begin();
            iter != m.end();
            iter++
        ) {
            if (iter -> second % 2 != 0) {
                return false;
            }
        }
        return true;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
