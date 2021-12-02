#include <vector>

using namespace std;

/**
 * LeetCode 344. Reverse String
 * https://leetcode.com/problems/reverse-string/
 */
class ReverseString {
public:
    void reverseString(vector<char>& s) {
        for (int l = 0, r = s.size() - 1; l < r; l++, r--) {
            doSwap(s, l, r);
        }
    }
private:
    void doSwap(vector<char>& s, int i, int j) {
        int t = s[i];
        s[i] = s[j];
        s[j] = t;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
