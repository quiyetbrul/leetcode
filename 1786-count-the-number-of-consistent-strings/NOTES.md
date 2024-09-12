# Thought Process

- create a vector of size 26 to represent the alphabets
  - the values will be boolean, representing whether the character is present in the allowed string
- create a counter to keep track of the number of consistent strings
- iterate through the words
  - increment counter
  - iterate through the characters of the word
    - if the character is not present in the allowed string
      - decrement counter
      - break
- return the counter
