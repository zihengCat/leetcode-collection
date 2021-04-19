package io.zihengcat.leetcode.array;

/**
 * LeetCode 1629. Slowest Key
 * https://leetcode.com/problems/slowest-key/
 */
public class SlowestKey {
    public static void main(String[] args) {
        // ...
    }
    public char slowestKey(int[] releaseTimes, String keysPressed) {
        if (releaseTimes == null
            || keysPressed == null
            || releaseTimes.length != keysPressed.length()) {
            return 0;
        }
        char keyChar = 0;
        int keyDuration = 0;
        int prevTime = 0;
        int vLen = releaseTimes.length;
        for (int i = 0; i < vLen; i++) {
            int currentDuration = releaseTimes[i] - prevTime;
            if (currentDuration > keyDuration) {
                keyChar = keysPressed.charAt(i);
                keyDuration = currentDuration;
            } else if (currentDuration == keyDuration) {
                keyChar = keysPressed.charAt(i) > keyChar ? keysPressed.charAt(i) : keyChar;
            }
            prevTime = releaseTimes[i];
        }
        return keyChar;
    }
}

/* EOF */
