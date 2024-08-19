func twoSum(nums []int, target int) []int {
    m := make(map[int]int)

    for i, n := range nums {
        t := target - n
        if idx, ok := m[t]; ok {
            return []int{idx, i}
        }
        m[n] = i
    }

    return nil
}