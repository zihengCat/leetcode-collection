#include <unordered_set>

using namespace std;

/**
 * LeetCode 2427. Number of Common Factors
 * https://leetcode.com/problems/number-of-common-factors/
 */
class NumberOfCommonFactors {
public:
    int commonFactors(int a, int b) {
        unordered_set<int> sa = findFactors(a);
        unordered_set<int> sb = findFactors(b);
        return findCommon(sa, sb);
    }
private:
    int findCommon(unordered_set<int>& a, unordered_set<int>& b) {
        int n = 0;
        for (unordered_set<int>::iterator iter = a.begin();
            iter != a.end();
            iter++
        ) {
            if (b.find(*iter) != b.end()) {
                n++;
            }
        }
        return n;
    }
    unordered_set<int> findFactors(int n) {
        if (n < 1) {
            return unordered_set<int>();
        }
        unordered_set<int> s;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                s.insert(i);
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
