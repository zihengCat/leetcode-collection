#include <unordered_set>

using namespace std;

/**
 * LeetCode 1925. Count Square Sum Triples
 * https://leetcode.com/problems/count-square-sum-triples/
 */
class CountSquareSumTriples {
public:
    int countTriples(int n) {
        int cnt = 0;
        unordered_set<int> hset;
        for (int i = 1; i <= n; i++) {
            hset.insert(i * i);
        }
        for (unordered_set<int>::iterator pA = hset.begin(); pA != hset.end(); pA++) {
            for (unordered_set<int>::iterator pB = hset.begin(); pB != hset.end(); pB++) {
                if (hset.find(*pA + *pB) != hset.end()) {
                    cnt++;
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
