#include <vector>

using namespace std;

/**
 * LeetCode 2119. A Number After a Double Reversal
 * https://leetcode.com/problems/a-number-after-a-double-reversal/
 */
class ANumberAfterADoubleReversal {
public:
    bool isSameAfterReversals(int num) {
        return num == reversal(reversal(num));
    }
private:
    int reversal(int n) {
        if (n <= 0) {
            return n;
        }
        int d = 0;
        int m = 0;
        while (n > 0) {
            d = n % 10;
            m = m * 10 + d;
            n /= 10;
        }
        return m;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
