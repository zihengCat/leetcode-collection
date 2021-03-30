#include <string>
#include <limits>
#include <cctype>

#define NOT_EXIST (-1)

using namespace std;

/**
 * LeetCode 1796. Second Largest Digit in a String
 * https://leetcode.com/problems/second-largest-digit-in-a-string/
 */
class SecondLargestDigitInAString {
public:
    int secondHighest(string s) {
        if (s.length() == 0) {
            return NOT_EXIST;
        }
        int largestNum = -1;
        int secondLargestNum = INT32_MIN;
        for (int i = 0; i < s.length(); i++) {
            if (isdigit(s.at(i))) {
                int currentNum = s.at(i) - '0';
                if (currentNum > largestNum) {
                    secondLargestNum = largestNum;
                    largestNum = currentNum;
                } else if (currentNum < largestNum && currentNum > secondLargestNum) {
                    secondLargestNum = currentNum;
                }
            }
        }
        return secondLargestNum == INT32_MIN ? NOT_EXIST : secondLargestNum;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
