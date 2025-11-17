func kLengthApart(nums []int, k int) bool {
	last := -1

	for i, n := range nums {
		if n == 1 {
			if last != -1 && i-last-1 < k {
				return false
			}
			last = i
		}
	}

	return true
}