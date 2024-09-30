# Thought Process

- create two vector of intervals (pair<int,int>), representing first booking and second booking

- for each double booking
  - if input start is less than interval.end AND input end is greater than interval.start
    - return false
- for each single booking
  - if input start is less than interval.end AND input end is greater than interval.start
    - push to double booking
- push to single booking
- return true
