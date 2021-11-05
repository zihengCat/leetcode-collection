/**
 * LeetCode 441. Arranging Coins
 * https://leetcode.com/problems/arranging-coins/
 */
class ArrangingCoins {
public:
    int arrangeCoins(int n) {
        int i = 1;
        while (n - i >= 0) {
            n -= i;
            i++;
        }
        return i - 1;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
