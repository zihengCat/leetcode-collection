#include <string>

using namespace std;

/**
 * LeetCode 1832. Check if the Sentence Is Pangram
 * https://leetcode.com/problems/check-if-the-sentence-is-pangram/
 */
class CheckIfTheSentenceIsPangram {
public:
    bool checkIfPangram(string sentence) {
        int alphabetMap[26] = {0, };
        int alphabetCount = 0;
        int sLen = sentence.size();
        int idx = 0;
        for (int i = 0; i < sLen; i++) {
            idx = sentence[i] - 'a';
            if (alphabetMap[idx] == 0) {
                alphabetMap[idx]++;
                alphabetCount++;
            }
        }
        return alphabetCount == 26;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */ 
