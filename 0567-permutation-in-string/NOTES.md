# Thought Process

- sliding window problem

- check if the length of `s1` is greater than the length of `s2`, return False
  - there will be no valid permutation of `s1` in `s2`

- create an alphabet frequency array
  - this will represent the characters from `s1` and `s2`

- first iteration will be for the first `s1.length()` characters of `s2`
  - return true if all current elements in the alpha freq array is 0

```output
Initial Count Update:

For i = 0 to m-1 (i.e., 0 to 1):
    count[s1[i] - 'a']++ and count[s2[i] - 'a']--
After processing s1 and the first m characters of s2:
    count['a' - 'a']++ → count[0]++ → count[0] = 1
    count['b' - 'a']++ → count[1]++ → count[1] = 1
    count['e' - 'a']-- → count[4]-- → count[4] = -1
    count['i' - 'a']-- → count[8]-- → count[8] = -1
    count vector: [1, 1, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
```

- sliding window technique starts
- iterate from index m of the alpha freq array until s2.length()
  - decrement the frequency of the character at index s2[i - 'a']
  - increment the frequency of the character at index s2[i - m] - 'a'
  - return true if all elements in the alpha freq array is 0

```output
Sliding Window:

For i = m to n-1 (i.e., 2 to 7):

    Update count for the new character entering the window and the character leaving the window.
    Check if the updated count vector represents a permutation.

Iteration 1 (i = 2):
    count[s2[2] - 'a']-- → count['d' - 'a']-- → count[3]-- → count[3] = -1
    count[s2[2 - m] - 'a']++ → count['e' - 'a']++ → count[4]++ → count[4] = 0
    count vector: [1, 1, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
    Call isPermutation(count) → return false.

Iteration 2 (i = 3):
    count[s2[3] - 'a']-- → count['b' - 'a']-- → count[1]-- → count[1] = 0
    count[s2[3 - m] - 'a']++ → count['i' - 'a']++ → count[8]++ → count[8] = 0
    count vector: [1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
    Call isPermutation(count) → return false.

Iteration 3 (i = 4):
    count[s2[4] - 'a']-- → count['a' - 'a']-- → count[0]-- → count[0] = 0
    count[s2[4 - m] - 'a']++ → count['d' - 'a']++ → count[3]++ → count[3] = 0
    count vector: [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
    Call isPermutation(count) → return true.
```

- return false if no valid permutation is found
