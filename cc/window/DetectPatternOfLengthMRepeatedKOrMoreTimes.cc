#include <vector>

using namespace std;

/**
 * LeetCode 1566. Detect Pattern of Length M Repeated K or More Times
 * https://leetcode.com/problems/detect-pattern-of-length-m-repeated-k-or-more-times/
 */
class DetectPatternOfLengthMRepeatedKOrMoreTimes {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
        int matchCnt = 0;
        int n = arr.size();
        for (int i = 0; i + m < n; i++) {
            if (arr[i] == arr[i + m]) {
                matchCnt++;
            } else {
                matchCnt = 0;
            }
            if (matchCnt == m * (k - 1)) {
                return true;
            }
        }
        return false;
    }
};

int main(int argc, char const *argv[]) {
	// ...
	return 0;
}

/* EOF */

