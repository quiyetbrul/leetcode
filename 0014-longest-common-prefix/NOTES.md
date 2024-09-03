# Thought Process

​
use strs[0] as the word with the longest prefix

- iterate through the given input strs
  - create a var j = 0; this will be the index for the prefix to be compared
  - while j is less than prefix size and j is less than the current word size and prefix[j] is equal to the current word[j]
    - increment j
  - update prefix to be prefix.slice(0, j)
  - if prefix is empty, return prefix

return prefix
