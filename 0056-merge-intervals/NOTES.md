# Thought Process

- sort the input 2D array

- it's a min/max problem!
- iterate over sorted intervals
  - if the current max is less than the current (ith) interval's start
    - push the current min/max to results[][]
    - update the min/max to the current interval's start/end
  - else
    - update the max to the max of the current interval's end and the current max
  - if index is the last (it'd probably be add explicitly outside the loop; fewer check in the loop)
    - push the last min/max to results[][]
- return results
