# Thought Process

- two pointer problem
  - prev and curr

- while curr is not null
  - save curr.next
  - reverse the curr node pointer to prev
  - move prev to curr
  - move curr to next

- e.g. 1 -> 2 -> 3 -> 4 -> NULL

```output
NULL <- 1 -> 2 -> 3 -> 4 -> NULL

// 1st it
NULL <- 1    2 -> 3 -> 4 -> NULL
        prev curr

// 2nd it
NULL <- 2 <- 1    3 -> 4 -> NULL
             prev curr

// 3rd it
NULL <- 3 <- 2 <- 1    4 -> NULL
                  prev curr

// 4th it
NULL <- 4 <- 3 <- 2 <- 1    NULL
                       prev curr

```

- return prev
