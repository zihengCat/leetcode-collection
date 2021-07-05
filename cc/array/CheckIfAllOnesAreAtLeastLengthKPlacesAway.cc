#include <vector>

using namespace std;

/**
 * LeetCode 1437. Check If All 1's Are at Least Length K Places Away
 * https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away/
 */
class CheckIfAllOnesAreAtLeastLengthKPlacesAway {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size();
        for (int i = 0, sIdx = -1; i < n; i++) {
            if (nums[i] == 1) {
                if (sIdx != -1) {
                    if (i - sIdx - 1 < k) {
                        return false;
                    }
                }
                sIdx = i;
            }
        }
        return true;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

