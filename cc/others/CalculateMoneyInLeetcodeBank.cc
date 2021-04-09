
/**
 * LeetCode 1716. Calculate Money in Leetcode Bank
 * https://leetcode.com/problems/calculate-money-in-leetcode-bank/
 */
class CalculateMoneyInLeetcodeBank {
public:
    int totalMoney(int n) {
        if (n < 0) {
            return 0;
        }
        int currentMonday = 1;
        int total = 0;
        while (n > 0) {
            for (int i = 0; i < 7 && n > 0; i++) {
                total += currentMonday + i;
                n--;
            }
            currentMonday++;
        }
        return total;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
