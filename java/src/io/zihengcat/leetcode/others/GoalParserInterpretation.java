package io.zihengcat.leetcode.others;

/**
 * LeetCode 1678. Goal Parser Interpretation
 * https://leetcode.com/problems/goal-parser-interpretation/
 */
public class GoalParserInterpretation {
    public static void main(String[] args) {
        // ...
    }

    private static final int NODE_ERROR = -1;
    private static final int NODE_UNKNOWN = 0;
    private static final int NODE_G = 1;
    private static final int NODE_PARENTHESES = 2;
    private static final int NODE_PARENTHESES_AL = 3;

    public String interpret(String command) {
        if (command == null || command.length() == 0) {
            return command;
        }
        StringBuilder sBuilder = new StringBuilder();
        int sLen = command.length();
        for (int i = 0; i < sLen; /* ... */) {
            switch (findNodeType(command, i)) {
            case NODE_G:
                sBuilder.append('G');
                i += 1;
                break;
            case NODE_PARENTHESES:
                sBuilder.append('o');
                i += 2;
                break;
            case NODE_PARENTHESES_AL:
                sBuilder.append("al");
                i += 4;
                break;
            default:
                // parse error
                break;
            }
        }
        return sBuilder.toString();
    }

    private int findNodeType(String s, int idx) {
        if (idx >= s.length()) {
            return NODE_ERROR;
        }
        switch (s.charAt(idx)) {
        case 'G':
            return NODE_G;
        case '(':
            if (idx + 1 >= s.length()) {
                return NODE_UNKNOWN;
            }
            switch (s.charAt(idx + 1)) {
            case ')':
                return NODE_PARENTHESES;
            case 'a':
                return NODE_PARENTHESES_AL;
            default:
                return NODE_UNKNOWN;
            }
        default:
            break;
        }
        return NODE_UNKNOWN;
    }
}

/* EOF */
