/**
 * LeetCode 2485. Find the Pivot Integer
 * https://leetcode.com/problems/find-the-pivot-integer/
 */
class FindThePivotInteger {
public:
    int pivotInteger(int n) {
        int lSum = 0;
        int rSum = n * (1 + n) / 2; // Sum(1 -> n)
        for (int i = 1; i <= n; i++) {
            lSum += i;
            if (lSum == rSum) {
                return i;
            }
            rSum -= i;
        }
        return -1; // Not found
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
