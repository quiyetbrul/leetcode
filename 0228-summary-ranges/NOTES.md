# Thought Process

- it's a min/max problem
- create vars for min and max
- iterate through the given array of integers
  - keep track of the current number in the array
  - if the current number is an increment of the previous number
    - this means we are still in the same range
    - update the max
  - else
    - if min and max are the same
      - add the min to the result, this is a range of 1
    - else
      - add the min and max to the result
    - if current index is not the last index
      - update the min to the current number
      - update the max to the current number
