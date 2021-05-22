#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * LeetCode 821. Shortest Distance to a Character
 * https://leetcode.com/problems/shortest-distance-to-a-character/
 */
class ShortestDistanceToACharacter {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> vec(s.size(), 0);
        int n = s.size();
        for (int i = 0; i < n; i++) {
            vec[i] = min(findLeft(s, c, i), findRight(s, c, i));
        }
        return vec;
    }
private:
    int findLeft(string& s, char c, int idx) {
        int dis = INT32_MAX;
        for (int i = idx; i >= 0; i--) {
            if (s[i] == c) {
                dis = idx - i;
                break;
            }
        }
        return dis;
    }
    int findRight(string& s, char c, int idx) {
        int dis = INT32_MAX;
        int n = s.size();
        for (int i = idx; i < n; i++) {
            if (s[i] == c) {
                dis = i - idx;
                break;
            }
        }
        return dis;
    }
};

/* EOF */
