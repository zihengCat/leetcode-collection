#include <vector>

using namespace std;

/**
 * LeetCode 1672. Richest Customer Wealth
 * https://leetcode.com/problems/richest-customer-wealth/ 
 */
class RichestCustomerWealth {
public:
    int maximumWealth(vector<vector<int> >& accounts) {
        int maxValue = 0;
        int vLen = accounts.size();
        int cLen = 0;
        for (int i = 0; i < vLen; i++) {
            int currentValue = 0;
            cLen = accounts[i].size();
            for (int j = 0; j < cLen; j++) {
                currentValue += accounts[i][j];
            }
            if (currentValue > maxValue) {
                maxValue = currentValue;
            }
        }
        return maxValue;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
