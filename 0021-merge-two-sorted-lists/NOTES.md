# Thought Process

- iterate through both linkedlist
- create dummy and curr LLs
  - dummy is used as a placeholder to simplify the merging process
    - it will have default value of 0, with next ptr set to nullptr

--

- while LL1 and LL 2 are not NULL
  - evaluate which value is less
    - if LL1.value <= LL2.value
      - ​curr.next = LL1
      - LL1 = LL1.next
    - else, do the same but for LL2
  - curr = curr.next
- basically:
- The loop continues as long as both list1 and list2 are not NULL.
- In each iteration, the node with the smaller value is appended to the merged list.
- curr is moved to the next node in the merged list.

--

- it'll exit out of while loop if one of the LLs hits NULL
  - which means the rest of the non-null LL will all be greater than the last value of the curr LL
- return dummy.next
