#include <vector>
#include <unordered_set>

using namespace std;

/**
 * LeetCode 1539. Kth Missing Positive Number
 * https://leetcode.com/problems/kth-missing-positive-number/
 */
class KthMissingPositiveNumber {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // [1, 2, 3, 4, ...(k)]
        int kLen = arr.size() + k;
        unordered_set<int> aSet(arr.begin(), arr.end());
        vector<int> aVec(kLen, 0);
        fillMissingArray(aVec, aSet, kLen);
        return aVec[k - 1];
    }
private:
    void fillMissingArray(vector<int>& arr, unordered_set<int>& hSet, int k) {
        for (int n = 1, i = 0; n <= k; n++) {
            if (hSet.find(n) == hSet.end()) {
                arr[i] = n;
                i++;
            }
        }
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
