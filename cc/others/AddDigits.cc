/**
 * LeetCode 258. Add Digits
 * https://leetcode.com/problems/add-digits/
 */
class AddDigits {
public:
    int addDigits(int num) {
        while (lenDigits(num) > 1) {
            num = sumDigits(num);
        }
        return num;
    }
private:
    int lenDigits(int n) {
        if (n == 0) {
            return 1;
        }
        int cnt = 0;
        while (n > 0) {
            n /= 10;
            cnt++;
        }
        return cnt;
    }
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
