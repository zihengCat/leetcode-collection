package io.zihengcat.leetcode.sort;

import java.util.ArrayList;
import java.util.List;

/**
 * LeetCode 1859. Sorting the Sentence
 * https://leetcode.com/problems/sorting-the-sentence/
 */
public class SortingTheSentence {
    public static void main(String[] args) {
        // ...
    }
    public String sortSentence(String s) {
        List<String> words = split(s, ' ');
        List<String> sortedWords = new ArrayList<>(words.size());
        for (int i = 0; i < words.size(); i++) {
            sortedWords.add("");
        }
        int idx = -1;
        int wLen = 0;
        StringBuilder sBuilder = new StringBuilder();
        int n = words.size();
        for (int i = 0; i < n; i++) {
            wLen = words.get(i).length();
            idx = words.get(i).charAt(wLen - 1) - '0' - 1; // 1-indexed word position
            sortedWords.set(idx,
                sBuilder.append(words.get(i), 0, wLen - 1).toString()
            );
            sBuilder.setLength(0); // clear
        }
        return join(sortedWords, ' ');
    }
    private String join(List<String> aList, char c) {
        StringBuilder sBuilder = new StringBuilder();
        int n = aList.size();
        for (int i = 0; i < n; i++) {
            sBuilder.append(aList.get(i));
            if (i < n - 1) {
                sBuilder.append(c);
            }
        }
        return sBuilder.toString();
    }
    private List<String> split(String s, char c) {
        List<String> aList = new ArrayList<>();
        StringBuilder sBuilder = new StringBuilder();
        int startIdx = -1;
        int n = s.length();
        for (int i = 0; i < n; /* ... */) {
            startIdx = i;
            while (i < n && s.charAt(i) != c) {
                i++;
            }
            sBuilder.append(s, startIdx, i);
            aList.add(sBuilder.toString());
            sBuilder.setLength(0);
            i++;
        }
        return aList;
    }
}

/* EOF */
