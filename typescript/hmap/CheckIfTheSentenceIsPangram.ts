/**
 * LeetCode 1832. Check if the Sentence Is Pangram
 * https://leetcode.com/problems/check-if-the-sentence-is-pangram/
 */
function checkIfPangram(sentence: string): boolean {
    return new Set(Array.from(sentence)).size === 26;
};

// EOF
