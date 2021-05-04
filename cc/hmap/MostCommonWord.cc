#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 819. Most Common Word
 * https://leetcode.com/problems/most-common-word/
 */
class MostCommonWord {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        // fill symbols
        string symbols = " !?',;.";
        for (int i = 0; i < symbols.size(); i++) {
            cSet.insert(symbols[i]);
        }
        // fill banned words
        unordered_set<string> bSet;
        for (int i = 0; i < banned.size(); i++) {
            bSet.insert(banned[i]);
        }
        // split words
        vector<string> words = split(paragraph);
        // count frequency
        unordered_map<string, int> uMap;
        for (int i = 0; i < words.size(); i++) {
            if (bSet.find(words[i]) == bSet.end()) {
                if (uMap.find(words[i]) == uMap.end()) {
                    uMap[words[i]] = 1;
                } else {
                    uMap[words[i]] += 1;
                }
            }
        }
        // find the most frequent word
        string rWord;
        int maxCnt = -1;
        for (unordered_map<string, int>::iterator iter = uMap.begin();
            iter != uMap.end();
            iter++
        ) {
            if (iter -> second > maxCnt) {
                rWord = iter -> first;
                maxCnt = iter -> second;
            }
        }
        return rWord;
    }
private:
    unordered_set<char> cSet;
    vector<string> split(string& str) {
        string s;
        vector<string> vec;
        int n = str.size();
        int i = 0;
        for (/* ... */; i < n; /* ... */) {
            if (cSet.find(str[i]) != cSet.end()) {
                while (i < n && cSet.find(str[i]) != cSet.end()) {
                    i++;
                }
                if (s.size() != 0) {
                    vec.push_back(s);
                    s.clear();
                }
                continue;
            }
            if (cSet.find(str[i]) == cSet.end()) {
                s.append(1, toLower(str[i]));
            }
            i++;
        }
        if (s.size() != 0) {
            vec.push_back(s);
            s.clear();
        }
        return vec;
    }
    char toLower(char c) {
        return c >= 'A' && c <= 'Z' ? c + ' ' : c;
    }
private:
    void printMap(unordered_map<string, int>& m) {
        for (unordered_map<string, int>::iterator iter = m.begin();
            iter != m.end();
            iter++
        ) {
            printf("{%s, %d}\n", iter -> first.c_str(), iter -> second);
        }
    }
};

int main(int argc, char const *argv[]) {
    MostCommonWord obj = MostCommonWord();
    string paragraph = "Bob hit a ball, the hit BALL flew far after it was hit.";
    vector<string> banned;
    banned.push_back("hit");

    // vector<string> vec = obj.split(paragraph);
    // for (vector<string>::iterator iter = vec.begin();
    //     iter != vec.end();
    //     iter++
    // ) {
    //     printf("%s\n", (*iter).c_str());
    // }

    string r = obj.mostCommonWord(paragraph, banned);
    printf("%s\n", r.c_str());
    return 0;
}

/* EOF */
