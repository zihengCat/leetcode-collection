#include <vector>
#include <string>

using namespace std;

/**
 * LeetCode 2496. Maximum Value of a String in an Array
 * https://leetcode.com/problems/maximum-value-of-a-string-in-an-array/
 */
class MaximumValueOfAStringInAnArray {
public:
    int maximumValue(vector<string>& arr) {
        int n = 0;
        for (int i = 0; i < arr.size(); i++) {
            n = max(n, getValue(arr[i]));
        }
        return n;
    }
private:
    int getValue(string& s) {
        int n = 0;
        for (int i = 0; i < s.size(); i++) {
            if (!(s[i] >= '0' && s[i] <= '9')) {
                return s.length();
            }
            n = n * 10 + s[i] - '0';
        }
        return n;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
