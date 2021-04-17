package main

/**
 * LeetCode 1646. Get Maximum in Generated Array
 * https://leetcode.com/problems/get-maximum-in-generated-array/
 */
func getMaximumGenerated(n int) int {
	if n < 0 {
		return n
	}
	if n == 0 || n == 1 {
		return n
	}
	nums := make([]int, n+1)
	nums[0] = 0
	nums[1] = 1
	vLen := n / 2
	var vMax int = ^int(uint(0) >> 1)
	for i := 1; i <= vLen; i++ {
		if 2*i <= n {
			nums[2*i] = nums[i]
			vMax = max(vMax, nums[2*i])
		}
		if 2*i+1 <= n {
			nums[2*i+1] = nums[i] + nums[i+1]
			vMax = max(vMax, nums[2*i+1])
		}
	}
	return vMax
}

func max(x int, y int) int {
	if x > y {
		return x
	}
	return y
}

func main() {
	// ...
}

/* EOF */
