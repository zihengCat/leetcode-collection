#include <vector>

using namespace std;

/**
 * LeetCode 905. Sort Array By Parity
 * https://leetcode.com/problems/sort-array-by-parity/
 */
class SortArrayByParity {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n, 0);
        int eIdx = 0;
        int oIdx = n - 1;
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) {
                v[eIdx] = nums[i];
                eIdx++;
            } else {
                v[oIdx] = nums[i];
                oIdx--;
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
