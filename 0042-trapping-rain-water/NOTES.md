# Thought Process

## Initialization

- We need two pointers, one starting from the beginning of the array (left) and one from the end (right).
- We also need two variables to store the maximum heights encountered from the left (left_max) and from the right (right_max).

## Traversal

- We traverse the array using the two pointers until they meet.
– For each position of the pointers:
  - Compare the left_max and right_max.
    - If left_max is less than right_max, then the amount of water trapped at the current left position is left_max - height[left].
      - Move the left pointer to the right.
    - If right_max is less than left_max, then the amount of water trapped at the current right position is right_max - height[right].
      - Move the right pointer to the left.
- Add the water trapped at each step to the total.

## Final Result

- The total water trapped is the sum of the water trapped at all positions.​
