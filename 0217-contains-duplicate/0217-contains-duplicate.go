func containsDuplicate(nums []int) bool {
    s := make(map[int]bool)

    for _, num := range nums{
        s[num] = true
    }

    return len(nums) != len(s)
}