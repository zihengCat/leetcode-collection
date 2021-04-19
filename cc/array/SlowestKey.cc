#include <vector>
#include <string>

using namespace std;

/**
 * LeetCode 1629. Slowest Key
 * https://leetcode.com/problems/slowest-key/
 */
class SlowestKey {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        if (releaseTimes.size() < 1
            || keysPressed.size() < 1
            || releaseTimes.size() != keysPressed.size()) {
            return 0;
        }
        char keyChar = 0;
        int keyDuration = 0;
        int prevTime = 0;
        int currentDuration = 0;
        int vLen = releaseTimes.size();
        for (int i = 0; i < vLen; i++) {
            currentDuration = releaseTimes[i] - prevTime;
            if (currentDuration > keyDuration) {
                keyChar = keysPressed[i];
                keyDuration = currentDuration;
            } else if (currentDuration == keyDuration) {
                keyChar = max(keyChar, keysPressed[i]);
            }
            prevTime = releaseTimes[i];
        }
        return keyChar;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
