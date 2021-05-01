#include <vector>

using namespace std;

/**
 * LeetCode 1470. Shuffle the Array
 * https://leetcode.com/problems/shuffle-the-array/
 */
class ShuffleTheArray {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int vLen = nums.size();
        vector<int> v(vLen, 0);
        int idx = 0;
        for (int i = 0; i < n; i++) {
            v[idx] = nums[i];
            idx += 2;
        }
        idx = 1;
        for (int i = n; i < vLen; i++) {
            v[idx] = nums[i];
            idx += 2;
        }
        return v;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
