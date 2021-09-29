
/**
 * LeetCode 1952. Three Divisors
 * https://leetcode.com/problems/three-divisors/
 */
class ThreeDivisors {
public:
    bool isThree(int n) {
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                cnt++;
            }
        }
        return cnt == 3;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
