# Thought Process

- slow/fast ptrs
- have the fast ptr advance n-times
  - this will create a gap of n between the slow and fast ptrs
- move slow and fast ptrs until fast reaches end of list
  - when fast reaches end of list, slow will be at the node before the one to remove because slow starts at dummy node
- slow.next = slow.next.next
  - this will remove the node by skipping it
- return dummy.next
