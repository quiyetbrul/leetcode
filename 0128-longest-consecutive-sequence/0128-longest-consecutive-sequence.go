func longestConsecutive(nums []int) int {
    m := make(map[int]bool)

    for _, n := range nums{
        m[n] = true;
    }

    max := 0

    for n := range m{
        if !m[n - 1]{
            counter := 0
            i := 0
            for m[n + i]{
                counter++
                i++
            }
            if counter > max{
                max = counter
            }
        }
    }
    return max
}