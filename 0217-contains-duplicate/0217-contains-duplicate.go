func containsDuplicate(nums []int) bool {

    // there's no built-in suppport for Set data structure.
    // instead, utilize Map with the data as key and bool for value;
    // value can also be an empty struct{}
    s := make(map[int]bool)

    for _, num := range nums{
        s[num] = true;
    }

    return len(nums) != len(s);
}