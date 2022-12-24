#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

/**
 * LeetCode 2506. Count Pairs Of Similar Strings
 * https://leetcode.com/problems/count-pairs-of-similar-strings/
 */
class CountPairsOfSimilarStrings {
public:
    int similarPairs(vector<string>& words) {
        vector<unordered_set<char> > v;
        for (int i = 0; i < words.size(); i++) {
            unordered_set<char> s;
            for (int j = 0; j < words[i].size(); j++) {
                s.insert(words[i][j]);
            }
            v.push_back(s);
        }
        int cnt = 0;
        for (int i = 0; i < words.size(); i++) {
            for (int j = i + 1; j < words.size(); j++) {
                if (v[i] == v[j]) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
