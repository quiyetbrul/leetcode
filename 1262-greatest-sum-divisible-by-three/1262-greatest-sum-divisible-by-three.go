func maxSumDivThree(nums []int) int {
	if len(nums) == 0 {
		return 0
	}

	sum := 0
    const INF = int(1e4) + 1

    r1 := []int{INF, INF}
    r2 := []int{INF, INF}

	for _, x := range nums {
		sum += x
		switch x % 3 {
		case 1:
			if x < r1[0] {
				r1[1], r1[0] = r1[0], x
			} else if x < r1[1] {
				r1[1] = x
			}
		case 2:
			if x < r2[0] {
				r2[1], r2[0] = r2[0], x
			} else if x < r2[1] {
				r2[1] = x
			}
		}
	}

	switch sum % 3 {
    case 0:
        return sum
    case 1:
        // Remove 1 smallest (r=1) OR 2 smallest (r=2)
        best := INF
        if r1[0] < INF {
            best = r1[0]
        }
        if r2[1] < INF && r2[0]+r2[1] < best {
            best = r2[0] + r2[1]
        }
        if best == INF {
            return 0
        }
        return sum - best

    case 2:
        // Remove 1 smallest (r=2) OR 2 smallest (r=1)
        best := INF
        if r2[0] < INF {
            best = r2[0]
        }
        if r1[1] < INF && r1[0]+r1[1] < best {
            best = r1[0] + r1[1]
        }
        if best == INF {
            return 0
        }
        return sum - best
    }

    return 0

}