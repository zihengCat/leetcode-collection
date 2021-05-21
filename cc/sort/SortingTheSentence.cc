#include <string>
#include <vector>

using namespace std;

/**
 * LeetCode 1859. Sorting the Sentence
 * https://leetcode.com/problems/sorting-the-sentence/
 */
class SortingTheSentence {
public:
    string sortSentence(string s) {
        vector<string> words = split(s, ' ');
        vector<string> sortedWords(words.size());
        int n = words.size();
        int idx = -1;
        int wordSize = 0;
        for (int i = 0; i < n; i++) {
            wordSize = words[i].size();
            idx = words[i][wordSize - 1] - '0' - 1; // 1-indexed word position
            sortedWords[idx] = string(words[i], 0, wordSize - 1);
        }
        return join(sortedWords, " ");
    }
public:
    string join(vector<string>& v, string c) {
        string s;
        int n = v.size();
        for (int i = 0; i < n; i++) {
            s.append(v[i]);
            if (i < n - 1) {
                s.append(c);
            }
        }
        return s;
    }
    vector<string> split(string& s, char c) {
        vector<string> vec;
        int startIdx = -1;
        int n = s.size();
        for (int i = 0; i < n; /* ... */) {
            startIdx = i;
            while (i < n && s[i] != c) {
                i++;
            }
            vec.push_back(string(s, startIdx, i - startIdx));
            i++;
        }
        return vec;
    }
};

int main(int argc, char const *argv[]) {
    SortingTheSentence obj = SortingTheSentence();
    string s = "is2 sentence4 This1 a3";
    vector<string> v = obj.split(s, ' ');
    printf("%d\n", v.size());
    for (int i = 0; i < v.size(); i++) {
        printf("\"%s\"\n", v[i].c_str());
    }
    // ...
    return 0;
}

/* EOF */
