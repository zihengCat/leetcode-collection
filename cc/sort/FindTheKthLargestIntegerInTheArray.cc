#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * LeetCode 1985. Find the Kth Largest Integer in the Array
 * https://leetcode.com/problems/find-the-kth-largest-integer-in-the-array/
 */
class FindTheKthLargestIntegerInTheArray {
public:
    // decreasing order
    static bool cmpFunc(string& lhs, string& rhs) {
        int lSize = lhs.size();
        int rSize = rhs.size();
        if (lSize != rSize) {
            return lSize > rSize;
        }
        for (int i = 0; i < lSize; i++) {
            if (lhs[i] != rhs[i]) {
                return lhs[i] > rhs[i];
            }
        }
        return false;
    }
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(), nums.end(), cmpFunc);
        return nums[k - 1];
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
