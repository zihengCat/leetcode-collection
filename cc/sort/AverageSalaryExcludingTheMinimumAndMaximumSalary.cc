#include <vector>

using namespace std;

/**
 * LeetCode 1491. Average Salary Excluding the Minimum and Maximum Salary
 * https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/
 */
class AverageSalaryExcludingTheMinimumAndMaximumSalary {
public:
    double average(vector<int>& salary) {
        int maxVal = INT32_MIN;
        int minVal = INT32_MAX;
        int sumVal = 0;
        int n = salary.size();
        for (int i = 0; i < n; i++) {
            if (salary[i] > maxVal) {
                maxVal = salary[i];
            }
            if (salary[i] < minVal) {
                minVal = salary[i];
            }
            sumVal += salary[i];
        }
        return (double)(sumVal - maxVal - minVal) / (n - 2);
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

