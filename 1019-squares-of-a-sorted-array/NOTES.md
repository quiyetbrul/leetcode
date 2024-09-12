# Thought Process

- two-pointer problem
- create a result vector of size n, init 0
- create left/right pointers
- iterate from n-1 to 0
  - if abs(left) > abs(right)
    - result[i] = left^2
    - left++
  - else
    - result[i] = right^2
    - right--
