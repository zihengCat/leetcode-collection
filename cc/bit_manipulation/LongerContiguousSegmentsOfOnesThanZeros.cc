#include <string>

using namespace std;

/**
 * LeetCode 1869. Longer Contiguous Segments of Ones than Zeros
 * https://leetcode.com/problems/longer-contiguous-segments-of-ones-than-zeros/
 */
class LongerContiguousSegmentsOfOnesThanZeros {
public:
    bool checkZeroOnes(string s) {
        int zeroLen = 0;
        int oneLen = 0;
        int startIdx = -1;
        char c = 0;
        int n = s.size();
        for (int i = 0; i < n; /* ... */) {
            startIdx = i;
            c = s[i];
            while (i < n && s[i] == c) {
                i++;
            }
            switch (c) {
            case '0':
                zeroLen = max(zeroLen, i - startIdx);
                break;
            case '1':
                oneLen = max(oneLen, i - startIdx);
                break;
            default:
                break;
            }
        }
        // strictly longer
        return oneLen > zeroLen;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
