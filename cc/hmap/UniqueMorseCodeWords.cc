#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 804. Unique Morse Code Words
 * https://leetcode.com/problems/unique-morse-code-words/
 */
class UniqueMorseCodeWords {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        fillMap();
        unordered_set<string> hset;
        int n = words.size();
        for (int i = 0; i < n; i++) {
            hset.insert(toMorseCodeWords(words[i]));
        }
        return hset.size();
    }
private:
    unordered_map<char, string> hmap;
    string toMorseCodeWords(string& s) {
        string r;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            r.append(hmap[s[i]]);
        }
        return r;
    }
    void fillMap() {
        string arr[26] = {
            ".-",
            "-...",
            "-.-.",
            "-..",
            ".",
            "..-.",
            "--.",
            "....",
            "..",
            ".---",
            "-.-",
            ".-..",
            "--",
            "-.",
            "---",
            ".--.",
            "--.-",
            ".-.",
            "...",
            "-",
            "..-",
            "...-",
            ".--",
            "-..-",
            "-.--",
            "--..",
        };
        for (int i = 0; i < 26; i++) {
            hmap[i + 'a'] = arr[i];
        }
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

