#include <string>

using namespace std;

/**
 * LeetCode 1668. Maximum Repeating Substring
 * https://leetcode.com/problems/maximum-repeating-substring/
 */
class MaximumRepeatingSubstring {
public:
    int maxRepeating(string sequence, string word) {
        int cnt = 0;
        string tWord = word;
        while (sequence.find(tWord) != string::npos){
            cnt++;
            tWord.append(word);
        }
        return cnt;
    }
private:
    bool find(string& s, string& sub) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == sub[0]) {
                if (matchs(s, sub, i)) {
                    return true;
                }
            }
        }
        return false;
    }
    bool matchs(string& s, string& word, int idx) {
        for (int i = 0; idx < s.size() && i < word.size(); i++, idx++) {
            if (s[idx] != word[i]) {
                return false;
            }
        }
        return true;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
