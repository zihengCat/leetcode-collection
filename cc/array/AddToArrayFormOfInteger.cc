#include <vector>

using namespace std;

/**
 * LeetCode 989. Add to Array-Form of Integer
 * https://leetcode.com/problems/add-to-array-form-of-integer/
 */
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> kNum = nToArray(k);
        return addArray(num, kNum);
    }
private:
    vector<int> addArray(vector<int>& a, vector<int>& b) {
        vector<int> v;
        int carry = 0;
        int remain = 0;
        int num = 0;
        int ia = a.size() - 1;
        int ib = b.size() - 1;
        for (/* ... */; ia >= 0 && ib >= 0; ia--, ib--) {
            num = a[ia] + b[ib] + carry;
            remain = num % 10;
            carry = num / 10;
            v.insert(v.begin(), remain);
        }
        while (ia >= 0) {
            num = a[ia] + 0 + carry;
            remain = num % 10;
            carry = num / 10;
            v.insert(v.begin(), remain);
            ia--;
        }
        while (ib >= 0) {
            num = b[ib] + 0 + carry;
            remain = num % 10;
            carry = num / 10;
            v.insert(v.begin(), remain);
            ib--;
        }
        if (carry > 0) {
            v.insert(v.begin(), carry);
        }
        return v;
    }
    vector<int> nToArray(int n) {
        vector<int> v;
        while (n > 0) {
            v.insert(v.begin(), n % 10);
            n /= 10;
        }
        return v;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
