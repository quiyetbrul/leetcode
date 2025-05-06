func isAnagram(s string, t string) bool {
    if len(s) != len(t){
        return false;
    }

    word := make(map[rune]int)

    for _, r := range s{
        word[r]++
    }

    for _, r := range t{
        if word[r] <= 0{
            return false;
        }

        word[r]--
    }

    return true
}