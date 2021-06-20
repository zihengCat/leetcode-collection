#include <vector>
#include <stack>

using namespace std;

/**
 * LeetCode 1475. Final Prices With a Special Discount in a Shop
 * https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/
 */
class FinalPricesWithASpecialDiscountInAShop {
public:
    vector<int> finalPrices(vector<int>& prices) {
        // return finalPricesWithBruteForce(prices);
        return finalPricesWithStack(prices);
    }
private:
    vector<int> finalPricesWithBruteForce(vector<int>& prices) {
        vector<int> arr(prices.begin(), prices.end());
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[j] <= arr[i]) {
                    arr[i] -= arr[j];
                    break;
                }
            }
        }
        return arr;
    }
    vector<int> finalPricesWithStack(vector<int>& prices) {
        vector<int> arr(prices.begin(), prices.end());
        stack<int> s;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            while (!s.empty() && arr[s.top()] >= arr[i]) {
                arr[s.top()] -= arr[i];
                s.pop();
            }
            s.push(i);
        }
        return arr;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

