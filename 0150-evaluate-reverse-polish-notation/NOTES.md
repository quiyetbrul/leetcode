# Thought Process

- create a stack
- iterate through the string
  - check if current string is a valid operator
    - if valid operators
      - pop twice and perform that valid operator
      - push the sum/diff/product/quotient to the stack
  - if number, push to stack​
- return top of stack
