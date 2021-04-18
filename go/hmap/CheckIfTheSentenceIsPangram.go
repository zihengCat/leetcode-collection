package main

/**
 * LeetCode 1832. Check if the Sentence Is Pangram
 * https://leetcode.com/problems/check-if-the-sentence-is-pangram/
 */
func checkIfPangram(sentence string) bool {
	alphabetMap := make([]int, 26)
	alphabetCount := 0
	sLen := len(sentence)
	idx := 0
	for i := 0; i < sLen; i++ {
		idx = int(sentence[i] - byte('a'))
		if alphabetMap[idx] == 0 {
			alphabetMap[idx]++
			alphabetCount++
		}
	}
	return alphabetCount == 26
}

func main() {
	// ...
}

// EOF
