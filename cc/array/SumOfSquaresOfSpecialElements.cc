#include <vector>

using namespace std;

/**
 * LeetCode 2778. Sum of Squares of Special Elements
 * https://leetcode.com/problems/sum-of-squares-of-special-elements/
 */
class SumOfSquaresOfSpecialElements {
public:
    int sumOfSquares(vector<int>& nums) {
        int s = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (n % (i + 1) == 0) {
                s += nums[i] * nums[i];
            }
        }
        return s;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
