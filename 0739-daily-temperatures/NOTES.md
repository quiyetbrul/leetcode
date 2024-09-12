# Thought Process

- ​Initialize a result vector v with the same size as temperatures, filled with 0s.
- Use a stack to keep track of the indices of the temperatures.
- Iterate through the temperatures array:
  - While the stack is not empty and the current temperature is greater than the temperature at the index stored at the top of the stack:
    - Pop the index from the stack.
    - Calculate the difference between the current index and the popped index, and store it in the result vector v.
  - Push the current index onto the stack.
- Return the result vector v.

## Visualization

### Initial State

- temperatures: [73, 74, 75, 71, 69, 72, 76, 73]
- v: [0, 0, 0, 0, 0, 0, 0, 0]
- s: []

### Iteration 1 (i = 0)

- Current temperature: 73
- Stack is empty, so push index 0 onto the stack.
- s: [0]

### Iteration 2 (i = 1)

- Current temperature: 74
- 74 > 73 (temperature at index 0), so pop index 0 from the stack.
- Update v[0] = 1 - 0 = 1.
- Push index 1 onto the stack.
- v: [1, 0, 0, 0, 0, 0, 0, 0]
- s: [1]

### Iteration 3 (i = 2)

- Current temperature: 75
- 75 > 74 (temperature at index 1), so pop index 1 from the stack.
- Update v[1] = 2 - 1 = 1.
- Push index 2 onto the stack.
- v: [1, 1, 0, 0, 0, 0, 0, 0]
- s: [2]

### Iteration 4 (i = 3)

- Current temperature: 71
- Stack is not empty, but 71 <= 75 (temperature at index 2), so push index 3 onto the stack.
- s: [2, 3]

### Iteration 5 (i = 4)

- Current temperature: 69
- Stack is not empty, but 69 <= 71 (temperature at index 3), so push index 4 onto the stack.
- s: [2, 3, 4]

### Iteration 6 (i = 5)

- Current temperature: 72
- 72 > 69 (temperature at index 4), so pop index 4 from the stack.
- Update v[4] = 5 - 4 = 1.
- 72 > 71 (temperature at index 3), so pop index 3 from the stack.
- Update v[3] = 5 - 3 = 2.
- Push index 5 onto the stack.
- v: [1, 1, 0, 2, 1, 0, 0, 0]
- s: [2, 5]

### Iteration 7 (i = 6)

- Current temperature: 76
- 76 > 72 (temperature at index 5), so pop index 5 from the stack.
- Update v[5] = 6 - 5 = 1.
- 76 > 75 (temperature at index 2), so pop index 2 from the stack.
- Update v[2] = 6 - 2 = 4.
- Push index 6 onto the stack.
- v: [1, 1, 4, 2, 1, 1, 0, 0]
- s: [6]

### Iteration 8 (i = 7)

- Current temperature: 73
- Stack is not empty, but 73 <= 76 (temperature at index 6), so push index 7 onto the stack.
- s: [6, 7]
- Final State
- v: [1, 1, 4, 2, 1, 1, 0, 0]
- s: [6, 7]
