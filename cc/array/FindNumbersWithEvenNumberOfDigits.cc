#include <vector>

using namespace std;

/**
 * LeetCode 1295. Find Numbers with Even Number of Digits
 * https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
 */
class FindNumbersWithEvenNumberOfDigits {
public:
    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (isEvenDigits(nums[i])) {
                cnt++;
            }
        }
        return cnt;
    }
private:
    bool isEvenDigits(int n) {
        int cnt = 0;
        while (n > 0) {
            n /= 10;
            cnt++;
        }
        return cnt % 2 == 0;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
