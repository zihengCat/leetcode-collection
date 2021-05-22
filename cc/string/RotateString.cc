#include <string>

using namespace std;

/**
 * LeetCode 796. Rotate String
 * https://leetcode.com/problems/rotate-string/
 */
class RotateString {
public:
    bool rotateString(string s, string goal) {
        return s.size() == goal.size()
            && (s + s).find(goal) != string::npos;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
