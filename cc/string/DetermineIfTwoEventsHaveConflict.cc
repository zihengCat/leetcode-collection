#include <vector>
#include <string>

using namespace std;

/**
 * LeetCode 2446. Determine if Two Events Have Conflict
 * https://leetcode.com/problems/determine-if-two-events-have-conflict/
 */
class DetermineIfTwoEventsHaveConflict {
public:
    bool haveConflict(vector<string>& a, vector<string>& b) {
        int aStart = toMinutes(a[0]);
        int aEnd = toMinutes(a[1]);
        int bStart = toMinutes(b[0]);
        int bEnd = toMinutes(b[1]);
        return max(aStart, bStart) <= min(aEnd , bEnd);
    }
private:
    int toMinutes(string& s) {
        // HH:MM
        int mm = (charToInt(s[0]) * 10 + charToInt(s[1])) * 60
            + charToInt(s[3]) * 10 + charToInt(s[4]);
        return mm;
    }
    int charToInt(char c) {
        return c - '0';
    }
};

int main() {
    // ...
}

/* EOF */
