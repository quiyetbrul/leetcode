package main

func maxSubarraySum(nums []int, k int) int64 {
    const INF int64 = 4_000_000_000_000_000_000
    
    n := len(nums)
    minPref := make([]int64, k)
    for i := 0; i < k; i++ {
        minPref[i] = INF
    }
    
    var prefix int64 = 0
    var ans int64 = -INF
    
    minPref[0] = 0
    
    for i := 0; i < n; i++ {
        prefix += int64(nums[i])
        rem := (i + 1) % k
        
        if minPref[rem] != INF {
            candidate := prefix - minPref[rem]
            if candidate > ans {
                ans = candidate
            }
        }
        
        if prefix < minPref[rem] {
            minPref[rem] = prefix
        }
    }
    
    return ans
}