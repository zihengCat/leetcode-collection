#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 1807. Evaluate the Bracket Pairs of a String
 * https://leetcode.com/problems/evaluate-the-bracket-pairs-of-a-string/
 */
class EvaluateTheBracketPairsOfAString {
public:
    string evaluate(string s, vector<vector<string> >& knowledge) {
        unordered_map<string, string> hmap;
        fillMap(hmap, knowledge);
        string r;
        int n = s.size();
        for (int i = 0; i < n; /* ... */) {
            switch (s[i]) {
            case '(':
            {
                string k;
                i++;
                while (i < n && s[i] != ')') {
                    k.append(1, s[i]);
                    i++;
                }
                unordered_map<string, string>::iterator iter = hmap.find(k);
                if (iter != hmap.end()) {
                    r.append(iter -> second);
                } else {
                    r.append(1, '?');
                }
                i++;
                break;
            }
            default:
                r.append(1, s[i]);
                i++;
                break;
            }
        }
        return r;
    }
private:
    void fillMap(unordered_map<string, string>& hmap, vector<vector<string> >& kv) {
        int n = kv.size();
        for (int i = 0; i < n; i++) {
            hmap[kv[i][0]] = kv[i][1];
        }
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
