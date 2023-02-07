#include <vector>

using namespace std;

/**
 * LeetCode 2553. Separate the Digits in an Array
 * https://leetcode.com/problems/separate-the-digits-in-an-array/
 */
class SeparateTheDigitsInAnArray {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> v;
        for (int i = 0; i < nums.size(); i++) {
            vector<int> d = findDigits(nums[i]);
            for (int j = 0; j < d.size(); j++) {
                v.push_back(d[j]);
            }
        }
        return v;
    }
private:
    vector<int> findDigits(int n) {
        vector<int> v;
        while (n > 0) {
            v.insert(v.begin(), n % 10);
            n /= 10;
        }
        return v;
    }
};

/* EOF */
