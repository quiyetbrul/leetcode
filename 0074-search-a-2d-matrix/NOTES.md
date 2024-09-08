# Thought Process

- binary search problem
- Flatten the provided 2D matrix​
  - do this by first flatttening the matrix size to a single list
    - option 1 is to iterate through the matrix
    - OR option 2 we access the "flattened" array using indixes
      - when doing left/right vars, right will have `rows*cols-1`, minus 1 because of 0-based indexing
        - this will give us the last index of the "flattened" array
- binary search the flattened array
  - the mid is usual, `mid = left + (right - left) / 2` to avoid overflow
  - the mid element is accessed `matrix[mid/cols][mid%cols]`
    - eg if mid is 5, then `matrix[5/4][5%4]` which is `matrix[1][1]`, we get 11

- rest is usual binary search
  - if target is less than mid, we search left
  - if target is greater than mid, we search right
  - if target is equal to mid, we return True
  - if we reach the end of the search, we return False
