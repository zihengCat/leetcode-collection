#include <vector>

using namespace std;

/**
 * LeetCode 326. Power of Three
 * https://leetcode.com/problems/power-of-three/
 */
class PowerOfThree {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) {
            return false;
        }
        if (n == 1) {
            return true;
        }
        while (n > 1) {
            if (n % 3 != 0) {
                return false;
            }
            n /= 3;
        }
        return true;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
