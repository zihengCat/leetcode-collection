#include <string>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 13. Roman to Integer
 * https://leetcode.com/problems/roman-to-integer/
 */
class RomanToInteger {
public:
    int romanToInt(string s) {
        // Prepare { Roman => Int } Mapper
        unordered_map<char, int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;

        // XI => 10 + 1 = 11
        // IX => 10 - 1 = 9
        int n = 0;
        for (int i = 0; i < s.size() - 1; i++) {
            if (m[s[i]] < m[s[i + 1]]) {
                n -= m[s[i]];
            } else {
                n += m[s[i]];
            }
        }
        n += m[s[s.size() - 1]];

        return n;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
