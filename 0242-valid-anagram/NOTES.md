# Thought Process

- check of length, return false if not equal

- create an array that will represent the alphabet, initialize each element with 0
- two iterations
  - iterate through s string, add 1 for each character in the alphabet array
  - ​iterate through t string, subtract 1 for each character in the alphabet array
- check if all elements in the alphabet array are 0, return true, otherwise return false
