# Thought Process

- sliding window
- keep track of result, left/right pointers, and max frequency of a character in the window
- create a map of character frequencies

- while the window is valid, expand the window
  - keep track of char frequency in the map
  - update max frequency
    - this will be max and the character that has the max frequency
      - it will be the character at the right pointer
        - why not the left pointer?
          - because the left pointer is always the character that is being replaced
  - check if the window size - max frequency > k
    - if so, shrink the window
      - decrement the frequency of the character at the left pointer
  - update the max frequency if necessary
