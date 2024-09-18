# Thought Process

- circular array problem

- create a vector<bool> size of 1440, init false
  - represents the total minutes in a day

- iterate over the input vector
  - convert the time to minutes
  - if the value at that index is true, return 0
    - dupe time, results in 0 minutes difference
  - set the value at that index to true

- iterate over 1440
  - if the value is true
    - find the next true value
    - calculate the difference
    - update the min_diff

- calculate the difference between the first and last true value
  - update the min_diff

- return min_diff
