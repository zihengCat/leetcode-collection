package main

/**
 * LeetCode 1672. Richest Customer Wealth
 * https://leetcode.com/problems/richest-customer-wealth/
 */
func maximumWealth(accounts [][]int) int {
	max := 0
	for i := range accounts {
		val := 0
		for j := range accounts[i] {
			val += accounts[i][j]
		}
		if val > max {
			max = val
		}
	}
	return max
}

func main() {
	// ...
}

// EOF
