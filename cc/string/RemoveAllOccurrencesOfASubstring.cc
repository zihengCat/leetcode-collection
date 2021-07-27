#include <string>

using namespace std;

/**
 * LeetCode 1910. Remove All Occurrences of a Substring
 * https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
 */
class RemoveAllOccurrencesOfASubstring {
public:
    string removeOccurrences(string s, string part) {
        int pLen = part.size();
        for (int i = s.find(part); i != string::npos; i = s.find(part)) {
            s = s.substr(0, i) + s.substr(i + pLen, s.size() - i - pLen);
        }
        return s;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
