package main

import (
	"sort"
)

/**
 * LeetCode 1619. Mean of Array After Removing Some Elements
 * https://leetcode.com/problems/mean-of-array-after-removing-some-elements/
 */
func trimMean(arr []int) float64 {
	sort.Ints(arr)
	vLen := len(arr)
	sIdx := vLen * 5 / 100
	eIdx := vLen - sIdx
	vSum := 0
	for i := sIdx; i < eIdx; i++ {
		vSum += arr[i]
	}
	return float64(vSum) / float64(eIdx-sIdx)
}

func main() {
	// ...
}

// EOF
