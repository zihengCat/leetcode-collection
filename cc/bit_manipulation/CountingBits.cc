#include <vector>

using namespace std;

/**
 * LeetCode 338. Counting Bits
 * https://leetcode.com/problems/counting-bits/
 */
class CountingBits {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        for (int i = 0; i <= n; i++) {
            v.push_back(countOnes(i));
        }
        return v;
    }
private:
    int countOnes(int n) {
        int cnt = 0;
        while (n > 0) {
            cnt += n & 0x01;
            n >>= 1;
        }
        return cnt;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
