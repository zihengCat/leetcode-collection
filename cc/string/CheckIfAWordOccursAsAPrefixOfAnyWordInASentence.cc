#include <string>
#include <vector>
#include <stdio.h>

using namespace std;

/**
 * LeetCode 1455. Check If a Word Occurs As a Prefix of Any Word in a Sentence
 * https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/
 */
class CheckIfAWordOccursAsAPrefixOfAnyWordInASentence {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string> words = split(sentence, ' ');
        int n = words.size();
        for (int i = 0; i < n; i++) {
            if (startWith(words[i], searchWord)) {
                return i + 1;
            }
        }
        return -1;
    }
private:
    bool startWith(string& s, string& prefix) {
        if (s.size() < prefix.size()) {
            return false;
        }
        int n = prefix.size();
        for (int i = 0; i < n; i++) {
            if (s[i] != prefix[i]) {
                return false;
            }
        }
        return true;
    }
    vector<string> split(string& s, char sep) {
        vector<string> v;
        int sIdx = 0;
        int n = s.size();
        for (int i = 0; i < n; /* ... */) {
            sIdx = i;
            while (i < n && s[i] != sep) {
                i++;
            }
            v.push_back(s.substr(sIdx, i - sIdx));
            i++;
        }
        return v;
    }
};

int main(int argc, char const *argv[]) {
    CheckIfAWordOccursAsAPrefixOfAnyWordInASentence obj =
        CheckIfAWordOccursAsAPrefixOfAnyWordInASentence();
    printf("%d\n", obj.isPrefixOfWord("i love eating burger", "burg"));
    return 0;
}

/* EOF */

