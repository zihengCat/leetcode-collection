#include <string>

using namespace std;

/**
 * LeetCode 1784. Check if Binary String Has at Most One Segment of Ones
 * https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/
 */
class CheckIfBinaryStringHasAtMostOneSegmentOfOnes {
public:
    bool checkOnesSegment(string s) {
        if (s.length() == 0) {
            return false;
        }
        int sLength = s.length();
        int segmentCount = 0;
        for (int i = 0; i < sLength; i++) {
            if (s.at(i) == '1') {
                int steps = 0;
                while (i + steps < sLength && s.at(i + steps) == '1') {
                    steps++;
                }
                if (steps > 0) {
                    segmentCount++;
                }
                i += steps;
            }
        }
        return segmentCount == 1;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
