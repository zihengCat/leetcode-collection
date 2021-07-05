#include <vector>
#include <unordered_set>

using namespace std;

struct VectorHash {
    size_t operator()(const std::vector<int>& v) const {
        hash<int> hasher;
        size_t seed = 0;
        for (int i : v) {
            seed ^= hasher(i) + 0x9e3779b9 + (seed<<6) + (seed>>2);
        }
        return seed;
    }
};

/**
 * LeetCode 1128. Number of Equivalent Domino Pairs
 * https://leetcode.com/problems/number-of-equivalent-domino-pairs/
 */
class NumberOfEquivalentDominoPairs {
public:
    int numEquivDominoPairs(vector<vector<int> >& dominoes) {
        int cnt = 0;
        unordered_set<vector<int>, VectorHash> hset;
        int n = dominoes.size();
        for (int i = 0; i < n; i++) {
            if (hset.find(dominoes[i]) != hset.end()) {
                cnt++;
            }
            hset.insert(dominoes[i]);
            doSwap(dominoes[i]);
            hset.insert(dominoes[i]);
        }
        return cnt;
    }
private:
    void doSwap(vector<int>& arr) {
        int t = arr[0];
        arr[0] = arr[1];
        arr[1] = t;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

