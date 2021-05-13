#include <vector>

using namespace std;

class Solution {
public:
    int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() != nums2.size()) {
            return 0;
        }
        int absSum = 0;
        int maxGap = INT32_MIN;
        int maxGapIdx = -1;
        int currentGap = 0;
        int n = nums1.size();
        for (int i = 0; i < n; i++) {
            currentGap = myAbs(nums1[i] - nums2[i]);
            absSum += currentGap;
            if (currentGap > maxGap) {
                maxGap = currentGap;
                maxGapIdx = i;
            }
        }
        if (maxGap == 0) {
            return 0; // same array
        }
        return (absSum - maxGap + 
            myAbs(findClosest(nums1, nums2[maxGapIdx]) - nums2[maxGapIdx]))
            % 1000000007;
    }
private:
    int findClosest(vector<int>& arr, int n) {
        int minGapIdx = -1;
        int minGap = INT32_MAX;
        int currentGap = 0;
        int vLen = arr.size();
        for (int i = 0; i < vLen; i++) {
            currentGap = myAbs(arr[i] - n);
            if (currentGap < minGap) {
                minGap = currentGap;
                minGapIdx = i;
            }
        }
        return arr[minGapIdx];
    }
    int myAbs(int n) {
        return n < 0 ? -1 * n : n;
    }
};

/* EOF */
