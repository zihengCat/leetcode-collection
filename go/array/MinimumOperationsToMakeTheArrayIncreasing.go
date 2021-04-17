package main

/**
 * LeetCode 1827. Minimum Operations to Make the Array Increasing
 * https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/
 */
func minOperations(nums []int) int {
	if nums == nil || len(nums) < 2 {
		return 0
	}
	nLen := len(nums)
	opCnt := 0
	prevNum := nums[0]
	for i := 1; i < nLen; i++ {
		if nums[i] <= prevNum {
			prevNum += 1
			opCnt += prevNum - nums[i]
		} else {
			prevNum = nums[i]
		}
	}
	return opCnt
}

func main() {
	// ...
}

// EOF
