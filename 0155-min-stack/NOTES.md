# Thought Process

- create two vectors
  - vector1 keeps track of all values pushed
  - vector2 keeps track of all min values
- push
  - push to vector1
  - if val is less than current min, push it to stack2
- pop
  - if vector1.back() == getMin, pop_back() from stack2
  - pop_back() from vector1
- top and getMin are straightforward​
