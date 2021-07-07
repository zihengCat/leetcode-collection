#include <vector>

using namespace std;

/**
 * LeetCode 985. Sum of Even Numbers After Queries
 * https://leetcode.com/problems/sum-of-even-numbers-after-queries/
 */
class SumOfEvenNumbersAfterQueries {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> v;
        int cSum = sumEven(nums);
        int oldVal = 0, newVal = 0;
        for (vector<int>& q : queries) {
            oldVal = nums[q[1]];
            newVal = oldVal + q[0];
            if (isEven(newVal)) {
                cSum += newVal;
            }
            if (isEven(oldVal)) {
                cSum -= oldVal;
            }
            nums[q[1]] = newVal;
            v.push_back(cSum);
        }
        return v;
    }
private:
    int sumEven(vector<int>& arr) {
        int s = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (isEven(arr[i])) {
                s += arr[i];
            }
        }
        return s;
    }
    bool isEven(int n) {
        return n % 2 == 0;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

