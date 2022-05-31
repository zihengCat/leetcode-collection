#include <vector>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 136. Single Number
 * https://leetcode.com/problems/single-number/
 */
class SingleNumber {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
        for (unordered_map<int, int>::iterator iter = m.begin();
            iter != m.end();
            iter++
        ) {
            if (iter -> second == 1) {
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
