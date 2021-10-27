#include <string>
#include <vector>

#define UnknownNode -1
#define WhiteNode    0
#define LettersNode  1
#define DigitsNode   2
#define HyphensNode  3
#define PunctuationMarksNode 4

using namespace std;

/**
 * LeetCode 2047. Number of Valid Words in a Sentence
 * https://leetcode.com/problems/number-of-valid-words-in-a-sentence/
 */
class NumberOfValidWordsInASentence {
public:
    int countValidWords(string sentence) {
        int cnt = 0;
        vector<string> vec = splitSentence(sentence, ' ');
        for (int i = 0; i < vec.size(); i++) {
            if (isValid(vec[i])) {
                cnt++;
            }
        }
        return cnt;
    }
private:
    bool isValid(string& s) {
        int lettersCnt = 0;
        int digitsCnt = 0;
        for (int i = 0; i < s.size(); i++) {
            switch (findNode(s[i])) {
            default:
                break;
            }
        }
    }
    int findNode(char c) {
        switch (c) {
        case ' ':
            return WhiteNode;
        case '-':
            return HyphensNode;
        case ',':
        case '.':
        case '!':
            return PunctuationMarksNode;
        default:
            break;
        }
        if (c >= 'a' && c <= 'z') {
            return LettersNode;
        }
        if (c >= '0' && c <= '9') {
            return DigitsNode;
        }
        return UnknownNode;
    }
    vector<string> splitSentence(string s, char c) {
        vector<string> vec;
        int sIdx = 0;
        int n = s.size();
        for (int i = 0; i < n; /* ... */) {
            sIdx = i;
            while (i < n && s[i] != c) {
                i++;
            }
            vec.push_back(s.substr(sIdx, i - sIdx));
            i++;
        }
        return vec;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
