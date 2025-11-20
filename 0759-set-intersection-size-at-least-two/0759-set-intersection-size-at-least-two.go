import "sort"

func intersectionSizeTwo(intervals [][]int) int {
    sort.Slice(intervals, func(i, j int) bool {
        return intervals[i][1] < intervals[j][1]
    })
    prev1 := intervals[0][1] - 1
    prev2 := intervals[0][1]
    count := 2
    for i := 1; i < len(intervals); i++ {
        start, end := intervals[i][0], intervals[i][1]
        if prev2 < start {
            prev1 = end - 1
            prev2 = end
            count += 2
        } else if prev1 < start {
            if end == prev2 {
                prev1 = end - 1
            } else {
                prev1 = end
            }
            if prev1 > prev2 {
                prev1, prev2 = prev2, prev1
            }
            count++
        }
    }
    return count
}