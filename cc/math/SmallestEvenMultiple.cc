/**
 * LeetCode 2413. Smallest Even Multiple
 * https://leetcode.com/problems/smallest-even-multiple/
 */
class SmallestEvenMultiple {
public:
    int smallestEvenMultiple(int n) {
        if (n % 2 == 0) {
            return n;
        }
        return 2 * n;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
