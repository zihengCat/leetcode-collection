#include <string>
#include <vector>

#define NodeUnknown -1
#define NodeWhite    0
#define NodeWord     1
#define NodeNumber   2

using namespace std;

/**
 * LeetCode 2042. Check if Numbers Are Ascending in a Sentence
 * https://leetcode.com/problems/check-if-numbers-are-ascending-in-a-sentence/
 */
class CheckIfNumbersAreAscendingInASentence {
public:
    bool areNumbersAscending(string s) {
        vector<int> vec;
        for (int i = 0; i < s.size(); /* ... */) {
            switch (findNode(s[i])) {
            case NodeWhite:
                skipWhiteSpaces(i, s);
                break;
            case NodeWord:
                skipWord(i, s);
                break;
            case NodeNumber:
                parseNumber(i, s, vec);
                break;
            default:
                break;
            }
        }
        return checkAscending(vec);
    }
private:
    bool checkAscending(vector<int> vec) {
        if (vec.size() < 2) {
            return true;
        }
        for (int i = 0, j = 1; j < vec.size(); i++, j++) {
            if (vec[i] >= vec[j]) {
                return false;
            }
        }
        return true;
    }
    void parseNumber(int& i, string& s, vector<int>& vec) {
        int n = 0;
        while (i < s.size() && s[i] >= '0' && s[i] <= '9') {
            n = n * 10 + s[i] - '0';
            i++;
        }
        vec.push_back(n);
    }
    void skipWord(int& i, string& s) {
        while (i < s.size() && s[i] >= 'a' && s[i] <= 'z') {
            i++;
        }
    }
    void skipWhiteSpaces(int& i, string& s) {
        while (i < s.size() && s[i] == ' ') {
            i++;
        }
    }
    int findNode(char c) {
        if (c == ' ') {
            return NodeWhite;
        } else if (c >= 'a' && c <= 'z') {
            return NodeWord;
        } else if (c >= '0' && c <= '9') {
            return NodeNumber;
        }
        return NodeUnknown;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
