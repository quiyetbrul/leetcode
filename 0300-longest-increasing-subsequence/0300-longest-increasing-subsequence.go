func lengthOfLIS(nums []int) int {
    // BST
    // var dp []int
    // for _, num := range nums {
    //     it := sort.Search(len(dp), func(i int) bool { return dp[i] >= num })
    //     if it == len(dp) {
    //         dp = append(dp, num)
    //     } else {
    //         dp[it] = num
    //     }
    // }
    // return len(dp)

    // DP
    n := len(nums)
    if n == 0{
        return 0
    }
    L := make([]int, n)
    for i := range L {
        L[i] = 1
    }
    for i := 1; i < n; i++{
        for j := 0; j < i; j++{
            if nums[j] < nums[i] && L[i] < 1 + L[j]{
                L[i] = 1 + L[j]
            }
        }
    }
    return maxElement(L);
}

func maxElement(L []int) int {
    if len(L) == 0 {
        panic("slice is empty")
    }
    max := L[0]
    for _, value := range L {
        if value > max {
            max = value
        }
    }
    return max
}