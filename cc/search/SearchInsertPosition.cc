#include <vector>

using namespace std;

/**
 * LeetCode 35. Search Insert Position
 * https://leetcode.com/problems/search-insert-position/
 */
class SearchInsertPosition {
public:
    int searchInsert(vector<int>& nums, int target) {
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
        return low;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
