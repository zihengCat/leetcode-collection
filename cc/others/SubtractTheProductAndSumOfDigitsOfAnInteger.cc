
/**
 * LeetCode 1281. Subtract the Product and Sum of Digits of an Integer
 * https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
 */
class SubtractTheProductAndSumOfDigitsOfAnInteger {
public:
    int subtractProductAndSum(int n) {
        int digitsSum = 0;
        int digitsProduct = 1;
        int remainder = 0;
        while (n > 0) {
            remainder = n % 10;
            digitsSum += remainder;
            digitsProduct *= remainder;
            n /= 10;
        }
        return digitsProduct - digitsSum;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
