package main

import (
	"math"
)

/**
 * LeetCode 747. Largest Number At Least Twice of Others
 * https://leetcode.com/problems/largest-number-at-least-twice-of-others/
 */
func dominantIndex(nums []int) int {
	if nums == nil || len(nums) < 2 {
		return 0
	}
	largestNumIdx := -1
	largestNum := int(math.MinInt32)
	secondLargestNum := int(math.MinInt32)
	for i := 0; i < len(nums); i++ {
		if nums[i] > largestNum {
			secondLargestNum = largestNum
			largestNum = nums[i]
			largestNumIdx = i
		} else if nums[i] > secondLargestNum && nums[i] <= largestNum {
			secondLargestNum = nums[i]
		}
	}
	if largestNum < secondLargestNum*2 {
		return -1
	}
	return largestNumIdx
}

func main() {
	// ...
}

// EOF
