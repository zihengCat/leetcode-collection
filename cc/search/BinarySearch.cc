#include <vector>

using namespace std;

/**
 * LeetCode 704. Binary Search
 * https://leetcode.com/problems/binary-search/
 */
class BinarySearch {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int mid = 0;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else if (nums[mid] < target) {
                low = mid + 1;
            }
        }
        return -1; // Not found
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
