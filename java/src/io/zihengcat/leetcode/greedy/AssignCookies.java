package io.zihengcat.leetcode.greedy;

import java.util.Arrays;

/**
 * LeetCode 455. Assign Cookies
 * https://leetcode.com/problems/assign-cookies/
 */
public class AssignCookies {
    public static void main(String[] args) {
        // ...
    }
    public int findContentChildren(int[] children, int[] cookies) {
        if (children == null || cookies == null) {
            return 0;
        }
        int cnt = 0;
        Arrays.sort(children);
        Arrays.sort(cookies);
        for (int childIdx = 0, cookieIdx = 0;
            childIdx < children.length && cookieIdx < cookies.length;
            /* ... */
        ) {
            if (children[childIdx] <= cookies[cookieIdx]) {
                childIdx++;
                cnt++;
            }
            cookieIdx++;
        }
        return cnt;
    }
}

/* EOF */
