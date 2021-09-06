#include <vector>

using namespace std;

/**
 * LeetCode 1991. Find the Middle Index in Array
 * https://leetcode.com/problems/find-the-middle-index-in-array/
 */
class FindTheMiddleIndexInArray {
public:
    int findMiddleIndex(vector<int>& nums) {
        int postSum = findSum(nums);
        int preSum = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            postSum -= nums[i];
            if (preSum == postSum) {
                return i;
            }
            preSum += nums[i];
        }
        return -1;
    }
private:
    int findSum(vector<int>& nums) {
        int r = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            r += nums[i];
        }
        return r;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
