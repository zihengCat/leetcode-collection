#!/usr/bin/env python
# -*- coding: utf-8 -*-

# LeetCode 1832. Check if the Sentence Is Pangram
# https://leetcode.com/problems/check-if-the-sentence-is-pangram/
class CheckIfTheSentenceIsPangram:
    def checkIfPangram(self, sentence: str) -> bool:
        return len(set(sentence)) == 26


if __name__ == "__main__":
    pass

# EOF
