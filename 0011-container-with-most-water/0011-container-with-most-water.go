func maxArea(height []int) int {
	maxArea := 0
	left := 0
	right := len(height) - 1
	currentArea := 0

	for left < right {
		currentArea = min(height[left], height[right]) * (right - left)
		maxArea = max(currentArea, maxArea)
		if height[left] < height[right] {
			left++
		} else {
			right--
		}
	}

	return maxArea
}

func max(a int, b int) int {
	if a > b {
		return a
	}
	return b
}

func min(a int, b int) int {
	if a < b {
		return a
	}
	return b
}