#include <vector>

using namespace std;

/**
 * LeetCode 189. Rotate Array
 * https://leetcode.com/problems/rotate-array/
 */
class RotateArray {
public:
    void rotate(vector<int>& nums, int k) {
        if (nums.size() == 0 || k < 0) {
            return;
        }
        rotateWithReverse(nums, k);
    }
private:
    void rotateWithReverse(vector<int>& nums, int k) {
        int len = nums.size();
        k = k % len;
        reverseArray(nums, 0, len - 1);
        reverseArray(nums, 0, k - 1);
        reverseArray(nums, k, len - 1);
    }
    void reverseArray(vector<int>& arr, int start, int end) {
        for (/* ... */; start < end; start++, end--) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
