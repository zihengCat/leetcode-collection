#include <vector>

using namespace std;

/**
 * LeetCode 806. Number of Lines To Write String
 * https://leetcode.com/problems/number-of-lines-to-write-string/
 */
class NumberOfLinesToWriteString {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int> r(2, 0); // [lineNum, lastLinePixels]
        int maxPixelsPerLine = 100;
        int n = s.size();
        for (int i = 0; i < n; /* ... */) {
            int lastLinePixels = 0;
            while (i < n && lastLinePixels + widths[s[i] - 'a'] <= maxPixelsPerLine) {
                lastLinePixels += widths[s[i] - 'a'];
                i++;
            }
            r[0]++;
            r[1] = lastLinePixels;
        }
        return r;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

