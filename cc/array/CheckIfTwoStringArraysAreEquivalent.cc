#include <vector>
#include <string>

using namespace std;

/**
 * LeetCode 1662. Check If Two String Arrays are Equivalent
 * https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/
 */
class CheckIfTwoStringArraysAreEquivalent {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1, s2;
        int w1Len = word1.size();
        int w2Len = word2.size();
        for (int i = 0; i < w1Len; i++) {
            s1 += word1[i];
        }
        for (int i = 0; i < w2Len; i++) {
            s2 += word2[i];
        }
        return s1 == s2;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
