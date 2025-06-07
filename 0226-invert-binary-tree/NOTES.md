# Thought Process

- it's a DFS problem
- first swap the left and right children of the root node
- then recursively call the function on the left and right children
- finally return the root node

- O(n) for both time and space complexity, where n is the number of nodes in the tree
