#include <vector>

using namespace std;

/**
 * LeetCode 283. Move Zeroes
 * https://leetcode.com/problems/move-zeroes/
 */
class MoveZeroes {
public:
    void moveZeroes(vector<int>& nums) {
        return moveZeroesWithShift(nums);
    }
    void moveZeroesWithShift(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[j] = nums[i];
                j++;
            }
        }
        for (/* ... */; j < n; j++) {
            nums[j] = 0;
        }
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
