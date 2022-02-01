#include <vector>
#include <unordered_set>

using namespace std;

/**
 * LeetCode 888. Fair Candy Swap
 * https://leetcode.com/problems/fair-candy-swap/
 */
class FairCandySwap {
public:
    vector<int> fairCandySwap(vector<int>& a, vector<int>& b) {
        vector<int> v;
        int diff = (sumArray(a) - sumArray(b)) / 2;
        unordered_set<int> hset(a.begin(), a.end());
        for (int& n : b) {
            if (hset.find(n + diff) != hset.end()) {
                // [a, b]
                v.push_back(n + diff);
                v.push_back(n);
                return v;
            }
        }
        return v;
    }
private:
    int sumArray(vector<int>& arr) {
        int r = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            r += arr[i];
        }
        return r;
    }
};


int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

