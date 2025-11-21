func countPalindromicSubsequence(s string) int {
    n := len(s)
    first := make([]int, 26)
    last := make([]int, 26)

    for i := 0; i < 26; i++ {
        first[i] = -1
        last[i] = -1
    }

    for i := 0; i < n; i++ {
        c := s[i] - 'a'
        if first[c] == -1 {
            first[c] = i
        }
        last[c] = i
    }

    result := 0

    for c := 0; c < 26; c++ {
        if first[c] != -1 && last[c] - first[c] > 1 {
            mask := 0
            for i := first[c] + 1; i < last[c]; i++ {
                mask |= 1 << (s[i] - 'a')
            }

            count := 0
            for mask > 0 {
                count += mask & 1
                mask >>= 1
            }

            result += count
        }
    }

    return result
}
