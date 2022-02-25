#include <string>
#include <vector>

using namespace std;

/**
 * LeetCode 165. Compare Version Numbers
 * https://leetcode.com/problems/compare-version-numbers/
 */
class CompareVersionNumbers {
public:
    int compareVersion(string v1, string v2) {
        vector<int> vA = splitAndParse(v1, '.');
        vector<int> vB = splitAndParse(v2, '.');
        addPadding(vA, vB);
        return doCompare(vA, vB);
    }
private:
    int doCompare(vector<int>& vA, vector<int>& vB) {
        int n = vA.size();
        for (int i = 0; i < n; i++) {
            if (vA[i] < vB[i]) {
                return -1;
            }
            if (vA[i] > vB[i]) {
                return 1;
            }
        }
        // Equal
        return 0;
    }
    int addPadding(vector<int>& vA, vector<int>& vB) {
        int nA = vA.size();
        int nB = vB.size();
        // Diff Length
        int diff = nA > nB ? nA - nB : nB - nA;
        // Padding zero
        if (nA > nB) {
            for (int i = 0; i < diff; i++) {
                vB.push_back(0);
            }
        } else if (nB > nA) {
            for (int i = 0; i < diff; i++) {
                vA.push_back(0);
            }
        }
        return diff;
    }
    vector<int> splitAndParse(string& s, char c) {
        int n = s.size();
        vector<int> v;
        int sIdx = 0;
        for (int i = 0; i < n; /* ... */) {
            sIdx = i;
            // Find target char
            while (i < n && s[i] != c) {
                i++;
            }
            // Split and parse
            string ss = s.substr(sIdx, i - sIdx);
            v.push_back(parseNumber(ss));
            i++;
        }
        return v;
    }
    int parseNumber(string& s) {
        int i = 0;
        // Skip leading zero
        while (i < s.size() && s[i] == '0') {
            i++;
        }
        if (i == s.size()) {
            return 0;
        }
        return stoi(s.substr(i, s.size() - i));
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
