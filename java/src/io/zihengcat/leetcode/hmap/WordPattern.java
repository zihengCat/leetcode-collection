package io.zihengcat.leetcode.hmap;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * LeetCode 290. Word Pattern
 * https://leetcode.com/problems/word-pattern/
 */
public class WordPattern {
    public static void main(String[] args) {
        // ...
    }
    public boolean wordPattern(String pattern, String s) {
        List<String> wordList = split(s, ' ');
        if (pattern.length() != wordList.size()) {
            return false;
        }
        Map<Character, Integer> cMap = new HashMap<>();
        Map<String, Integer> sMap = new HashMap<>();
        int cIdx = 0;
        int sIdx = 0;
        int n = wordList.size();
        for (int i = 0; i < n; i++) {
            cIdx = cMap.getOrDefault(pattern.charAt(i), -1);
            sIdx = sMap.getOrDefault(wordList.get(i), -1);
            cMap.put(pattern.charAt(i), i);
            sMap.put(wordList.get(i), i);
            if (cIdx != sIdx) {
                return false;
            }
        }
        return true;
    }
    private List<String> split(String s, char c) {
        List<String> aList = new ArrayList<>();
        StringBuilder sBuilder = new StringBuilder();
        int startIdx = 0;
        int n = s.length();
        for (int i = 0; i < n; /* ... */) {
            startIdx = i;
            while (i < n && s.charAt(i) != c) {
                i++;
            }
            sBuilder.append(s, startIdx, i);
            aList.add(sBuilder.toString());
            sBuilder.setLength(0); // clear
            i++;
        }
        return aList;
    }
}

/* EOF */
