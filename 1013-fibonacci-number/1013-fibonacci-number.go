func fib(n int) int {
    if n == 0 {
        return 0;
    }else if n == 1 {
        return 1;
    }

    // DP
    F := make([]int, n+1)
    F[0] = 0
    F[1] = 1

    for i := 2; i <= n; i++ {
        F[i] = F[i-1] + F[i-2]
    }

    return F[n]

    // recursion
    // return fib(n-1)+fib(n-2);
}