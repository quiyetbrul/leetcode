var adj [][]int
var ans int
var K int

func maxKDivisibleComponents(n int, edges [][]int, values []int, k int) int {
	K = k
	ans = 0
	adj = make([][]int, n)
	for i := 0; i < n; i++ {
		adj[i] = make([]int, 0)
	}

	for _, edge := range edges {
		u, v := edge[0], edge[1]
		adj[u] = append(adj[u], v)
		adj[v] = append(adj[v], u)
	}

	dfs(0, -1, values)

	return ans
}

func dfs(node, parent int, values []int) int {
	currentSum := values[node]

	for _, neighbor := range adj[node] {
		if neighbor != parent {
			currentSum += dfs(neighbor, node, values)
		}
	}

	if currentSum%K == 0 {
		ans++
		return 0
	}

	return currentSum
}