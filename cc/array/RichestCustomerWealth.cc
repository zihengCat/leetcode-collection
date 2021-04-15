#include <vector>

using namespace std;

/**
 * LeetCode 1672. Richest Customer Wealth
 * https://leetcode.com/problems/richest-customer-wealth/ 
 */
class RichestCustomerWealth {
public:
    int maximumWealth(vector<vector<int> >& accounts) {
        int max = 0;
        int vLen = accounts.size();
        int cLen = 0;
        for (int i = 0; i < vLen; i++) {
            cLen = accounts[i].size();
            int val = 0;
            for (int j = 0; j < cLen; j++) {
                val += accounts[i][j];
            }
            if (val > max) {
                max = val;
            }
        }
        return max;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
