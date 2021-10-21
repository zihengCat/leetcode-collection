#include <string>

using namespace std;

/**
 * LeetCode 1422. Maximum Score After Splitting a String
 * https://leetcode.com/problems/maximum-score-after-splitting-a-string/
 */
class MaximumScoreAfterSplittingAString {
public:
    int maxScore(string s) {
        int leftZeros = 0;
        int rightOnes = countOnes(s);
        int maxScore = 0;
        int sLen = s.size() - 1; // two non-empty substrings
        for (int i = 0; i < sLen; i++) {
            switch (s[i]) {
            case '0':
                leftZeros++;
                break;
            case '1':
                rightOnes--;
                break;
            default:
                break;
            }
            if (leftZeros + rightOnes > maxScore) {
                maxScore = leftZeros + rightOnes;
            }
        }
        return maxScore;
    }
private:
    int countOnes(string& s) {
        int cnt = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                cnt++;
            }
        }
        return cnt;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
