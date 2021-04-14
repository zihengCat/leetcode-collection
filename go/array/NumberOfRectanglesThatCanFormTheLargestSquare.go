package main

/**
 * LeetCode 1725. Number Of Rectangles That Can Form The Largest Square
 * https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square/
 */
func countGoodRectangles(rectangles [][]int) int {
	maxLen := 0
	cnt := 0
	for _, rec := range rectangles {
		currentLen := min(rec[0], rec[1])
		if currentLen > maxLen {
			maxLen = currentLen
			cnt = 1
		} else if currentLen == maxLen {
			cnt++
		}
	}
	return cnt
}

func min(x int, y int) int {
	if x < y {
		return x
	}
	return y
}

func main() {
	// ...
}

// EOF
