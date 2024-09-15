# Thought Process

- it's binary search problem

## Approach 1

- three pass solution
  - find the pivot point
  - search the left subarray
  - search the right subarray
- find the smallest element in one iteration
  - this will be the pivot point
- determine which subarray to search
  - is it sorted normally?
  - if rotated
    - check if we should search left or right
- perform binary search in the selected subarray

## Approach 2

​- one pass solution
  - perform binary search
  - check if the target is in the left or right subarray
    - search in that subarray
- con is it checks where to look for the target in every iteration
  - can this be memoized?
