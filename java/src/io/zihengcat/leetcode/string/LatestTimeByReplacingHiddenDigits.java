package io.zihengcat.leetcode.string;

/**
 * LeetCode 1736. Latest Time by Replacing Hidden Digits
 * https://leetcode.com/problems/latest-time-by-replacing-hidden-digits/
 */
public class LatestTimeByReplacingHiddenDigits {
    public static void main(String[] args) {
        // ...
    }
    private static char[] maximumTimeTemplate = new char[]{
        '2', '3', ':', '5', '9',
    };
    public String maximumTime(String time) {
        if (time == null || time.length() != 5) {
            return time;
        }
        char[] timeArr = time.toCharArray();
        for (int i = 0; i < timeArr.length; i++) {
            if (timeArr[i] == '?') {
                switch (i) {
                    case 0:
                        if (timeArr[1] > '3' && timeArr[1] <= '9') {
                            timeArr[i] = '1';
                        } else {
                            timeArr[i] = maximumTimeTemplate[i];
                        }
                        break;
                    case 1:
                        if (timeArr[0] < '2' && timeArr[0] >= '0') {
                            timeArr[i] = '9';
                        } else {
                            timeArr[i] = maximumTimeTemplate[i];
                        }
                        break;
                    default:
                        timeArr[i] = maximumTimeTemplate[i];
                        break;
                }
            }
        }
        StringBuilder sBuilder = new StringBuilder();
        sBuilder.append(timeArr, 0, timeArr.length);
        return sBuilder.toString();
    }
}


/* EOF */
