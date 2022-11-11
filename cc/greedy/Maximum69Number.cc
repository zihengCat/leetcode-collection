#include <vector>

using namespace std;

/**
 * LeetCode 1323. Maximum 69 Number
 * https://leetcode.com/problems/maximum-69-number/
 */
class Maximum69Number {
public:
    int maximum69Number (int num) {
        vector<int> v;
        intToArray(num, v);
        transformArray(v);
        return arrayToInt(v);
    }
private:
    void transformArray(vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 6) {
                arr[i] = 9;
                break;;
            }
        }
    }
    int arrayToInt(vector<int>& arr) {
        int n = 0;
        for (int i = 0; i < arr.size(); i++) {
            n = n * 10 + arr[i];
        }
        return n;
    }
    void intToArray(int n, vector<int>& v) {
        v.clear();
        while (n > 0) {
            v.insert(v.begin(), n % 10);
            n /= 10;
        }
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
