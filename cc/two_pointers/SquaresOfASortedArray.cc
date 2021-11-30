#include <vector>

using namespace std;

/**
 * LeetCode 977. Squares of a Sorted Array
 * https://leetcode.com/problems/squares-of-a-sorted-array/
 */
class SquaresOfASortedArray {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v(nums.size(), 0);
        int l = 0;
        int r = nums.size() - 1;
        for (int p = nums.size() - 1; p >= 0; p--) {
            if (abs(nums[l]) > abs(nums[r])) {
                v[p] = sq(nums[l]);
                l++;
            } else {
                v[p] = sq(nums[r]);
                r--;
            }
        }
        return v;
    }
private:
    int sq(int n) {
        return n * n;
    }
    int abs(int n) {
        return n < 0 ? n * -1 : n;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
