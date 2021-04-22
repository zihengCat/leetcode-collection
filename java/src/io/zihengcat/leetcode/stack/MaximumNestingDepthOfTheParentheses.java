package io.zihengcat.leetcode.stack;

import java.util.Deque;
import java.util.LinkedList;

/**
 * LeetCode 1614. Maximum Nesting Depth of the Parentheses
 * https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
 */
public class MaximumNestingDepthOfTheParentheses {
    public static void main(String[] args) {
        // ...
    }
    public int maxDepth(String s) {
        if (s == null) {
            return 0;
        }
        // Deque<Character> aStack = new LinkedList<>();
        int maximumDepth = 0;
        int currentDepth = 0;
        for (int i = 0; i < s.length(); i++) {
            switch (s.charAt(i)) {
            case '(':
                // aStack.push('(');
                currentDepth++;
                break;
            case ')':
                // aStack.pop();
                currentDepth--;
            default:
                break;
            }
            maximumDepth = Math.max(maximumDepth, currentDepth);
        }
        return maximumDepth;
    }
}

/* EOF */
