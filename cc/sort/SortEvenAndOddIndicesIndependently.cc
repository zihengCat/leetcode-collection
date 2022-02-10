#include <vector>

using namespace std;

/**
 * LeetCode 2164. Sort Even and Odd Indices Independently
 * https://leetcode.com/problems/sort-even-and-odd-indices-independently/
 */
class SortEvenAndOddIndicesIndependently {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> r(nums.size(), 0);
        // split
        vector<int> evenList;
        vector<int> oddList;
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) {
                evenList.push_back(nums[i]);
            } else {
                oddList.push_back(nums[i]);
            }
        }
        // sort increasing
        sort(evenList.begin(), evenList.end());
        // sort descreasing
        sort(oddList.begin(), oddList.end());
        reverse(oddList.begin(), oddList.end());
        // combine
        for (int i = 0, j = 0; i < nums.size(); i += 2, j += 1) {
            r[i] = evenList[j];
        }
        for (int i = 1, j = 0; i < nums.size(); i += 2, j += 1) {
            r[i] = oddList[j];
        }
        return r;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
