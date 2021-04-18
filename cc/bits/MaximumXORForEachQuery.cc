#include <vector>

using namespace std;

/**
 * LeetCode 1829. Maximum XOR for Each Query
 * https://leetcode.com/problems/maximum-xor-for-each-query/
 */
class MaximumXORForEachQuery {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int nLen = nums.size();
        vector<int> vec(nLen, 0);
        int maximumXOR = (1 << maximumBit) - 1;
        int vXOR = 0;
        for (int i = 0; i < nLen; i++) {
            vXOR ^= nums[i];
        }
        for (int i = 0; i < nLen; i++) {
            vec[i] = vXOR ^ maximumXOR;
            vXOR ^= nums[nLen - 1 - i];
        }
        return vec;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
