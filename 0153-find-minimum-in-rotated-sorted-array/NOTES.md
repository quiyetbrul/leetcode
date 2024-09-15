# Thought Process

​- binary search problem
- find the pivot point
- pivot point is the point where the array is rotated
  - if nums mid is greater than nums right, it means the pivot point is on the right side
    - move left pointer to mid + 1
  - else move right pointer to mid
- return nums left because it is the minimum element
