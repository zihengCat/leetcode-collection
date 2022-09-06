#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

/**
 * LeetCode 869. Reordered Power of 2
 * https://leetcode.com/problems/reordered-power-of-2/
 */
class ReorderedPowerOfTwo {
public:
    bool reorderedPowerOf2(int n) {
        string ns = toString(n);
        string sSorted = sortString(ns);
        // ...
    }
private:
    string sortString(string& s) {
        string ss(s);
        sort(ss.begin(), ss.end());
        return ss;
    }
    string toString(int n) {
        // C++98 => to_string()
        ostringstream oss;
        oss << n;
        return oss.str();
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
