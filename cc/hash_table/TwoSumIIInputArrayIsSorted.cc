#include <vector>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 167. Two Sum II - Input array is sorted
 * https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
 */
class TwoSumIIInputArrayIsSorted {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> vec;
        unordered_map<int, int> aMap;
        int vLen = numbers.size();
        for (int i = 0; i < vLen; i++) {
            aMap[numbers[i]] = i;
        }
        int n = 0;
        for (int i = 0; i < vLen; i++) {
            n = target - numbers[i];
            if (aMap.find(n) != aMap.end()) {
                // 1-indexed
                vec.push_back(i + 1);
                vec.push_back(aMap[n] + 1);
                break;
            }
        }
        return vec;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
