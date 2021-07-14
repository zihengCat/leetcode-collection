#include <vector>

using namespace std;

/**
 * LeetCode 1929. Concatenation of Array
 * https://leetcode.com/problems/concatenation-of-array/
 */
class ConcatenationOfArray {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int>v(n << 1, 0);
        for (int i = 0; i < n; i++) {
            v[i] = nums[i];
            v[i + n] = nums[i];
        }
        return v;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
