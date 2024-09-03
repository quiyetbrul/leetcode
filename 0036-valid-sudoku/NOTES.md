# Thought Process

- create unordered_set for rows, cols, and subgrids
- nested for loop because it's a 2D array
  - check whether current index is in rows, cols, or subgrids
    - to get subgrid = (i/3) * 3 + j/3​
  - return false if current index is already in either one of the three unordered_set
  - otherwise, add the element at current index to all unordered_set
