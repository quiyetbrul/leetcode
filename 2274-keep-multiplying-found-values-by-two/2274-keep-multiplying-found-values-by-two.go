func findFinalValue(nums []int, original int) int {
	m := make(map[int]bool, len(nums))

	for _, num := range nums {
		m[num] = true
	}

	for m[original] {
		original *= 2
	}

	return original
}

func findFinalValueBits(nums []int, k int) int {
    bits := 0
    for _, num := range nums {
        if num % k != 0 {
            continue
        }
        n := num / k
        if n & (n - 1) == 0 {
            bits |= n
        }
    }
    d := bits + 1
    return k * (d & -d)
}