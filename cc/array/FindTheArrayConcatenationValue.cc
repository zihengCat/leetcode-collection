#include <vector>

using namespace std;

/**
 * LeetCode 2562. Find the Array Concatenation Value
 * https://leetcode.com/problems/find-the-array-concatenation-value/
 */
class FindTheArrayConcatenationValue {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long n = 0;
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r) {
            if (l == r) {
                n += nums[l];
            } else {
                n += concatNum(nums[l], nums[r]);
            }
            l++;
            r--;
        }
        return n;
    }
private:
    int concatNum(int first, int last) {
        if (last == 0) {
            return first * 10;
        }
        int cnt = 1;
        int n = last;
        while (n > 0) {
            n /= 10;
            cnt *= 10;
        }
        return first * cnt + last;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
