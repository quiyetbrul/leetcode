# Thought Process

- find half point using slow/fast pointers
  - fast pointers move twice
    - when fast pointers hit null, slow pointer is at half point

- reverse the second half using slow pointer

- merge the two lists
  - this will be done by creating two pointers
    - one for the first half
    - one for the second half, reversed

eg.

```output
1->2->3->4->5->6

IT 1:
first half: 1->2->3
second half: 4->5->6

tmp1 = first->next // 2
tmp2 = second->next // 5

first->next = second // 1->6
second->next = tmp1 // 6->2

first = tmp1 // 2
second = tmp2 // 5

// 1->6->2->3 and 5->4

IT 2:
first half: 2->3
second half: 5->4

tmp1 = first->next // 3
tmp2 = second->next // 4

first->next = second // 2->5
second->next = tmp1 // 5->3

first = tmp1 // 3
second = tmp2 // 4

// 1->6->2->5->3 and 4

IT 3:
first half: 3
second half: 4

tmp1 = first->next // null
tmp2 = second->next // null

first->next = second // 3->4
second->next = tmp1 // 4->null

first = tmp1 // null
second = tmp2 // null

// 1->6->2->5->3->4

```
