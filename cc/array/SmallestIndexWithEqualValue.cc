#include <vector>

using namespace std;

/**
 * LeetCode 2057. Smallest Index With Equal Value
 * https://leetcode.com/problems/smallest-index-with-equal-value/
 */
class SmallestIndexWithEqualValue {
public:
    int smallestEqual(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (i % 10 == nums[i]) {
                return i;
            }
        }
        return -1;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
