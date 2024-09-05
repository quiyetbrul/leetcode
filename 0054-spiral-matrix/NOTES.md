# Thought Process

since the direction can only be right/left or up/down, we can create a while loop that will run until rows > 0 AND cols > 0.

we can keep track of direction that changes between 1 and -1. 1 for right/down and -1 for left/up.

inside while loop, we create two loops

1. to iterate through remaining cols
2. to iterate through remaining rows

within each loop, we update the appropriate row or col index by adding the direction (either 1 or -1) and append the value to the result array.

after each loop, we decrement the rows or cols
