#include <string>

using namespace std;

/**
 * LeetCode 1903. Largest Odd Number in String
 * https://leetcode.com/problems/largest-odd-number-in-string/
 */
class LargestOddNumberInString {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        for (int i = n - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 == 1) { // [1, 3, 5, 7, 9]
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

