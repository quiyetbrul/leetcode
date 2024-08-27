# Thought Process

- create two stacks
  - stack1 keeps track of all values pushed
  - stack2 keeps track of all min values
- push
  - push to stack1
  - if val is less than current min, push it to stack2
- pop
  - if stack1.top == getMin, pop from stack2
  - pop from stack1
    - notice how popping from stack1 MUST be after checking for popping getMin()
- top and getMin are straightforward​
