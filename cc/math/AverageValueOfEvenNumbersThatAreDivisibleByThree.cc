#include <vector>

using namespace std;

/**
 * LeetCode 2455. Average Value of Even Numbers That Are Divisible by Three
 * https://leetcode.com/problems/average-value-of-even-numbers-that-are-divisible-by-three/
 */
class AverageValueOfEvenNumbersThatAreDivisibleByThree {
public:
    int averageValue(vector<int>& nums) {
        int cnt = 0;
        int nSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 6 == 0) {
                cnt++;
                nSum += nums[i];
            }
        }
        if (cnt == 0) {
            return 0;
        }
        return nSum / cnt;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
