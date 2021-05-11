#include <vector>

using namespace std;

/**
 * LeetCode 1854. Maximum Population Year
 * https://leetcode.com/problems/maximum-population-year/
 */
class MaximumPopulationYear {
public:
    int maximumPopulation(vector<vector<int> >& logs) {
        int years = 2051;
        vector<int> v(years, 0);
        int n = logs.size();
        for (int i = 0; i < n; i++) {
            for (int j = logs[i][0]; j < logs[i][1]; j++) {
                v[j]++;
            }
        }
        int maximumP = INT32_MIN;
        int maximumY = 0;
        for (int i = 0; i < years; i++) {
            if (v[i] > maximumP) {
                maximumP = v[i];
                maximumY = i;
            }
        }
        return maximumY;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
