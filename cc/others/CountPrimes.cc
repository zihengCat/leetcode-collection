#include <vector>

using namespace std;

/**
 * LeetCode 204. Count Primes
 * https://leetcode.com/problems/count-primes/
 */
class CountPrimes {
public:
    int countPrimes(int n) {
        if (n < 2) {
            return 0;
        }
        vector<bool> isPrime(n, true);
        isPrime[0] = false;
        isPrime[1] = false;
        int half = mySqrt(n);
        for (int i = 0; i < half; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        int cnt = 0;
        int vLen = isPrime.size();
        for (int i = 0; i < vLen; i++) {
            if (isPrime[i]) {
                cnt++;
            }
        }
        return cnt;
    }
private:
    int mySqrt(int n) {
        if (n < 0) {
            return 0;
        }
        for (int i = 0; i < n; i++) {
            if (i * i >= n)  {
                return i;
            }
        }
        return 0;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
