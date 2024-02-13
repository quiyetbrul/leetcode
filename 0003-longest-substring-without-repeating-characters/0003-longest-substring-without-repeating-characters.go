func lengthOfLongestSubstring(s string) int {
    // chSet stores characters encountered so far as keys and their indices as values
    chSet := make(map[byte]int) // stores char as key and idx as value
    left := 0                    // left pointer of the sliding window
    result := 0                  // length of the longest substring without repeating characters
    
    // Iterate through the string using a sliding window approach
    for right := 0; right < len(s); right++ {
        // Check if the current character exists in the chSet and its index is greater than or equal to the left pointer
        if index, ok := chSet[s[right]]; ok && index >= left {
            // If the current character is a repeat within the current substring,
            // move the left pointer to one position after the last occurrence of the current character
            left = index + 1
        }
        
        // Store/update the index of the current character in the chSet
        chSet[s[right]] = right
        
        // Calculate the length of the current substring and compare it with the longest substring found so far
        if newres := right - left + 1; newres > result {
            // If the length of the current substring is greater than the longest substring found so far,
            // update the result variable to store this new longest substring length
            result = newres
        }
    }
    
    // Return the length of the longest substring without repeating characters
    return result
}
