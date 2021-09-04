#include <vector>

using namespace std;

/**
 * LeetCode 1979. Find Greatest Common Divisor of Array
 * https://leetcode.com/problems/find-greatest-common-divisor-of-array/
 */
class FindGreatestCommonDivisorOfArray {
public:
    int findGCD(vector<int>& nums) {
        return findGcd(findMin(nums), findMax(nums));
    }
private:
    int findMax(vector<int>& arr) {
        int r = arr[0];
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (arr[i] > r) {
                r = arr[i];
            }
        }
        return r;
    }
    int findMin(vector<int>& arr) {
        int r = arr[0];
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (arr[i] < r) {
                r = arr[i];
            }
        }
        return r;
    }
    int findGcd(int a, int b) {
        if (a == 0) {
            return b;
        }
        return findGcd(b % a, a);
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
