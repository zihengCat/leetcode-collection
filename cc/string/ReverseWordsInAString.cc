#include <string>
#include <vector>

#define NodeWhite 0
#define NodeWord  1

using namespace std;

/**
 * LeetCode 151. Reverse Words in a String
 * https://leetcode.com/problems/reverse-words-in-a-string/
 */
class ReverseWordsInAString {
public:
    string reverseWords(string s) {
        vector<string> vec;
        for (int i = 0; i < s.size(); /* ... */) {
            switch (findNode(s[i])) {
            case NodeWhite:
                skipWhiteSpaces(i, s);
                break;
            case NodeWord:
                parseWord(i, s, vec);
                break;
            default:
                break;
            }
        }
        return reverseJoin(vec);
    }
private:
    string reverseJoin(vector<string>& vec) {
        int n = vec.size();
        if (n == 0) {
            return "";
        }
        if (n == 1) {
            return vec[0];
        }
        string r;
        r.append(vec[n - 1]);
        for (int i = n - 2; i >= 0; i--) {
            r.append(" ");
            r.append(vec[i]);
        }
        return r;
    }
    void parseWord(int& i, string& s, vector<string>& vec) {
        string t;
        while (i < s.size() && s[i] != ' ') {
            t.push_back(s[i]);
            i++;
        }
        vec.push_back(t);
    }
    void skipWhiteSpaces(int& i, string& s) {
        while (i < s.size() && s[i] == ' ') {
            i++;
        }
    }
    int findNode(char c) {
        if (c == ' ') {
            return NodeWhite;
        }
        return NodeWord;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
