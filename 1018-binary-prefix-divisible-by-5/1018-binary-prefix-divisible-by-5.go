func prefixesDivBy5(nums []int) []bool {
	ans := make([]bool, len(nums))
	mod := 0

	for i, bit := range nums {
		mod = (mod*2 + bit) % 5
		ans[i] = (mod == 0)
	}

	return ans
}