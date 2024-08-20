func groupAnagrams(strs []string) [][]string {
    
    if len(strs) < 1{
        return [][]string{{""}}
    }

    var results [][]string
    m := make(map[[26]int][]string)

    for _, s := range strs{
        // NOTE: must be an array and not a slice
        // slices are not comparable unlike arrays
        count := [26]int{}

        for _, c := range s{
            count[c-'a']+=1
            // e.g. eat -> 10001000000000000001000000
            // e.g. tea -> 10001000000000000001000000
        }

        m[count] = append(m[count], s)
        // append eat
        // append tea
    }

    for _, i := range m{
        results = append(results, i)
        // append array string of {eat, tea, ate}
    }

    return results
}