#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 609. Find Duplicate File in System
 * https://leetcode.com/problems/find-duplicate-file-in-system/
 */
class FindDuplicateFileInSystem {
public:
    vector<vector<string> > findDuplicate(vector<string>& paths) {
        vector<vector<string> > rVec;
        unordered_map<string, vector<string> > hMap;
        int n = paths.size();
        for (int i = 0; i < n; i++) {
            vector<string> tokens = split(paths[i], ' ');
            for (int j = 1; j < tokens.size(); j++) {
                hMap[findFileContent(tokens[j])].push_back(
                    tokens[0] + '/' + findFileSubPath(tokens[j])
                );
            }
        }
        for (unordered_map<string, vector<string> >::iterator iter = hMap.begin();
            iter != hMap.end();
            iter++
        ) {
            if ((iter -> second).size() > 1) {
                rVec.push_back(iter -> second);
            }
        }
        return rVec;
    }
private:
    vector<string> split(string& s, char c) {
        vector<string> vec;
        int startIdx = 0;
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
    string findFileSubPath(string& s) {
        int startIdx = 0;
        int endIdx = s.size() - 1;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                endIdx = i;
                break;
            }
        }
        return string(s, startIdx, endIdx - startIdx);
    }
    string findFileContent(string& s) {
        int startIdx = 0;
        int endIdx = s.size() - 1;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                startIdx = i + 1;
                break;
            }
        }
        return string(s, startIdx, endIdx - startIdx);
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
