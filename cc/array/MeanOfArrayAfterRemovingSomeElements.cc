#include <vector>
#include <algorithm>

using namespace std;

/**
 * LeetCode 1619. Mean of Array After Removing Some Elements
 * https://leetcode.com/problems/mean-of-array-after-removing-some-elements/
 */
class MeanOfArrayAfterRemovingSomeElements {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int vLen = arr.size();
        int sIdx = vLen * 5 / 100;
        int eIdx = vLen - vLen * 5 / 100;
        int vSum = 0;
        for (int i = sIdx; i < eIdx; i++) {
            vSum += arr[i];
        }
        return 1.0 * vSum / (eIdx - sIdx);
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
