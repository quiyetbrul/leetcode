# Thought Process

- create a set out of the input array
- create vars to keep track of max and current length
- iterate through the set
  - check if the previous number to the current number is in the set
    - e.g. if 3 is in the set, check if 2 is in the set
    - this allows to see whether the current number is the start of a sequence
  - if the current number is the start of a sequence
    - while the next number is in the set
      - increment the current length
  - update the max length if the current length is greater
- return the max length
