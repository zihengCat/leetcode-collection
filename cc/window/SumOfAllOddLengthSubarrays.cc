#include <vector>

using namespace std;

/**
 * LeetCode 1588. Sum of All Odd Length Subarrays
 * https://leetcode.com/problems/sum-of-all-odd-length-subarrays/
 */
class SumOfAllOddLengthSubarrays {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int s = 0;
        int n = arr.size();
        for (int wSize = 1; wSize <= n; wSize += 2) {
            for (int wStart = 0, wEnd = wStart + wSize - 1;
                wEnd < n;
                wStart++, wEnd++
            ) {
                for (int i = wStart; i <= wEnd; i++) {
                    s += arr[i];
                }
            }
        }
        return s;
    }
};

int main(int argc, char const *argv[]) {
	// ...
	return 0;
}

/* EOF */

