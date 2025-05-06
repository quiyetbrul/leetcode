func twoSum(nums []int, target int) []int {
    m := make(map[int]int)

    // for loop range gives access to both index and element
    for i, n := range nums{
        // returns value if ok
        if v, ok := m[target - n]; ok{
            return []int{i, v}
        }
        m[n] = i
    }
    return nil
}