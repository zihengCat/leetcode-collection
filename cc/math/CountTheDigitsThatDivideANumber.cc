/**
 * LeetCode 2520. Count the Digits That Divide a Number
 * https://leetcode.com/problems/count-the-digits-that-divide-a-number/
 */
class CountTheDigitsThatDivideANumber {
public:
    int countDigits(int num) {
        int n = num;
        int cnt = 0;
        while (n > 0) {
            if (num % (n % 10) == 0) {
                cnt++;
            }
            n /= 10;
        }
        return cnt;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
