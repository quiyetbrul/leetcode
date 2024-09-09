# Thought Process

- sort the intervals by start time
- create a min heap to store the end time of the meeting
- iterate through the intervals
  - if the start time of the current interval is greater than the end time of the meeting at the top of the heap, pop the heap
    - this means that the current meeting can use the same room as the meeting that just ended
  - push the end time of the current interval to the heap
    - this means that more meeting rooms are needed
- return the size of the heap
