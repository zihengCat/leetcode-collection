#include <string>
#include <vector>
#include <utility>

using namespace std;

/**
 * LeetCode 1592. Rearrange Spaces Between Words
 * https://leetcode.com/problems/rearrange-spaces-between-words/
 */
class RearrangeSpacesBetweenWords {
public:
    string reorderSpaces(string text) {
        string s;
        int spaceCnt = 0;
        // Word: [startIdx, endIdx]
        vector<pair<int, int> > words;
        int sLen = text.size();
        for (int i = 0; i < sLen; /* ... */) {
            if (text[i] == ' ') {
                spaceCnt++;
                i++;
                continue;
            }
            int next = findWord(&text, i);
            pair<int, int> newWord;
            newWord.first = i;
            newWord.second = next;
            words.push_back(newWord);
            i = next;
        }
        int quotient = 0;
        int remainder = 0;
        if (words.size() == 1) {
            remainder = spaceCnt;
        } else {
            quotient = spaceCnt / (words.size() - 1);
            remainder = spaceCnt % (words.size() - 1);
        }
        for (int i = 0; i < words.size(); i++) {
            s.append(text, words[i].first, words[i].second - words[i].first);
            if (i < words.size() - 1) {
                s.append(quotient, ' ');
            }
        }
        s.append(remainder, ' ');
        return s;
    }
private:
    int findWord(string* s, int idx) {
        while (
            idx < s -> size()
            && s -> at(idx) != ' '
        ) {
            idx++;
        }
        return idx;
    }
};

/* EOF */
