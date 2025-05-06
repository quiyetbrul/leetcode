func topKFrequent(nums []int, k int) []int {
    if len(nums) < k{
        return nil
    }

    // create a map
    // key will be the element from given nums
    // value will be the frequency of said element
    // [1,1,1,2,2,3]
    // m[1], 3
    // m[2], 2
    // m[3], 1
    m := make(map[int]int)
    for _, n := range nums{
        m[n]++
    }

    // create 2D array
    // row will be the value from map
    // col will be the key from map
    /*
        {
            {},
            {3},
            {2},
            {1},
            {},
            {}
        }
    */
    s := make([][]int, len(nums) + 1)
    for k, v := range m{
        s[v] = append(s[v], k)
    }

    result := []int{}
    // iterate backwards
    for i := len(s) - 1; i >= 0 && len(result) < k; i-- {
        // only append value at row[i] if it's not empty
        if len(s[i]) > 0 {
            result = append(result, s[i]...)
            // Trim if we added too many
            if len(result) > k {
                result = result[:k]
            }
        }
    }

    return result;
}