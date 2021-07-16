#include <string>

using namespace std;

/**
 * LeetCode 1309. Decrypt String from Alphabet to Integer Mapping
 * https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/
 */
class DecryptStringFromAlphabetToIntegerMapping {
public:
    string freqAlphabets(string s) {
        string r;
        int n = s.size();
        for (int i = 0; i < n; /* ... */) {
            if (i + 2 < n && s[i + 2] == '#') {
                r.append(1, parseMultiple(s, i));
                i += 3;
                continue;
            }
            r.append(1, parseSingle(s, i));
            i++;
        }
        return r;
    }
private:
    char parseMultiple(string& s, int i) {
        char n10 = s[i] - '0';
        char n1 = s[i + 1] - '0';
        int n = n10 * 10 + n1;
        return 'a' + n - 1;
    }
    char parseSingle(string& s, int i) {
        return 'a' + s[i] - '0' - 1;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
