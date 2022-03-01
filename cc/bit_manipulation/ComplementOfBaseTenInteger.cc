/**
 * LeetCode 1009. Complement of Base 10 Integer
 * https://leetcode.com/problems/complement-of-base-10-integer/
 */
class ComplementOfBaseTenInteger {
public:
    int bitwiseComplement(int n) {
        if (n == 0) {
            return 1;
        }
        return (0xFFFFFFFF >> (32 - bitLen(n))) - n;
    }
private:
    int bitLen(int n) {
        int cnt = 0;
        while (n > 0) {
            n /= 2;
            cnt++;
        }
        return cnt;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
