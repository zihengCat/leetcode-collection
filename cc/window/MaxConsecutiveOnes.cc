#include <vector>

using namespace std;

/**
 * LeetCode 485. Max Consecutive Ones
 * https://leetcode.com/problems/max-consecutive-ones/
 */
class MaxConsecutiveOnes {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxLen = 0;
        int wLeft = 0;
        int wRight = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                // wLeft = extendLeft(nums, i);
                wLeft = i;
                wRight = extendRight(nums, i);
                if (wRight - wLeft + 1 > maxLen) {
                    maxLen = wRight - wLeft + 1;
                }
                i = wRight;
            }
        }
        return maxLen;
    }
private:
    int extendLeft(vector<int>& arr, int i) {
        while (i >= 0 && arr[i] == 1) {
            i--;
        }
        return i + 1;
    }
    int extendRight(vector<int>& arr, int i) {
        int n = arr.size();
        while (i < n && arr[i] == 1) {
            i++;
        }
        return i - 1;
    }
};

int main(int argc, char const *argv[]) {
	// ...
	return 0;
}

/* EOF */
