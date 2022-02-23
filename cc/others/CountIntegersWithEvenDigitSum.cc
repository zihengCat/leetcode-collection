/**
 * LeetCode 2180. Count Integers With Even Digit Sum
 * https://leetcode.com/problems/count-integers-with-even-digit-sum/
 */
class CountIntegersWithEvenDigitSum {
public:
    int countEven(int n) {
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            if (sumDigits(i) % 2 == 0) {
                cnt++;
            }
        }
        return cnt;
    }
private:
    int sumDigits(int n) {
        int s = 0;
        while (n > 0) {
            s += n % 10;
            n /= 10;
        }
        return s;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
