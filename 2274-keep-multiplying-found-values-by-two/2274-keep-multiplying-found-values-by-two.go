func findFinalValue(nums []int, original int) int {
	m := make(map[int]bool)

	for _, num := range nums {
		m[num] = true
	}

	result := original

	for {
		if _, ok := m[result]; ok {
			result *= 2
		} else {
			break
		}
	}

	return result
}