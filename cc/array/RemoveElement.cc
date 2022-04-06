#include <vector>

using namespace std;

/**
 * LeetCode 27. Remove Element
 * https://leetcode.com/problems/remove-element/
 */
class RemoveElement {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != val) {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
