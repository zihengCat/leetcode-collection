#include <vector>
#include <stdlib.h>

using namespace std;

/**
 * LeetCode 1534. Count Good Triplets
 * https://leetcode.com/problems/count-good-triplets/
 */
class CountGoodTriplets {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int cnt = 0;
        int vLen = arr.size();
        for (int i = 0; i < vLen; i++) {
            for (int j = i + 1; j < vLen; j++) {
                for (int k = j + 1; k < vLen; k++) {
                    if ((abs(arr[i] - arr[j]) <= a)
                        && (abs(arr[j] - arr[k]) <= b)
                        && (abs(arr[i] - arr[k]) <= c)) {
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
