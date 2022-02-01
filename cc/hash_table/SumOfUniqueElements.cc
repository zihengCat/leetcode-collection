#include <vector>
#include <map>

using namespace std;

/**
 * LeetCode 1748. Sum of Unique Elements
 * https://leetcode.com/problems/sum-of-unique-elements/
 */
class SumOfUniqueElements {
public:
    int sumOfUnique(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        int len = nums.size();
        map<int, int> aMap;
        for (int i = 0; i < len; i++) {
            if (aMap.find(nums[i]) != aMap.end()) {
                aMap[nums[i]] += 1;
            } else {
                aMap[nums[i]] = 1;
            }
        }
        int sum = 0;
        for (map<int, int>::iterator iter = aMap.begin();
            iter != aMap.end();
            iter++
        ) {
            if (iter -> second == 1) {
                sum += iter -> first;
            }
        }
        return sum;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
