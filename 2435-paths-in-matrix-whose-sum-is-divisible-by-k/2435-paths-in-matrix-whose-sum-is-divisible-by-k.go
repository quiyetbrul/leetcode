const MOD = 1_000_000_007

func numberOfPaths(grid [][]int, k int) int {
    m, n := len(grid), len(grid[0])
    
    dp := make([][]int64, n)
    for j := 0; j < n; j++ {
        dp[j] = make([]int64, k)
    }

    // Initialize first cell
    dp[0][grid[0][0]%k] = 1

    for r := 0; r < m; r++ {
        nextDP := make([][]int64, n)
        for j := 0; j < n; j++ {
            nextDP[j] = make([]int64, k)
        }

        for c := 0; c < n; c++ {
            val := grid[r][c]

            for rem := 0; rem < k; rem++ {
                // from top
                if r > 0 {
                    ways := dp[c][rem]
                    if ways > 0 {
                        next := (rem + val) % k
                        nextDP[c][next] = (nextDP[c][next] + ways) % MOD
                    }
                }

                // from left
                if c > 0 {
                    ways := nextDP[c-1][rem]
                    if ways > 0 {
                        next := (rem + val) % k
                        nextDP[c][next] = (nextDP[c][next] + ways) % MOD
                    }
                }

                // first row and first column
                if r == 0 && c == 0 {
                    nextDP[0][val%k] = 1
                }
            }
        }

        dp = nextDP
    }

    return int(dp[n-1][0])
}
