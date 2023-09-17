#include <vector>

using namespace std;

/**
 * LeetCode 2859. Sum of Values at Indices With K Set Bits
 * https://leetcode.com/problems/sum-of-values-at-indices-with-k-set-bits/
 */
class SumOfValuesAtIndicesWithKSetBits {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int s = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (countOnes(i) == k) {
                s += nums[i];
            }
        }
        return s;
    }
private:
    int countOnes(int n) {
        int c = 0;
        while (n > 0) {
            c += n & 0x01;
            n >>= 1;
        }
        return c;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
