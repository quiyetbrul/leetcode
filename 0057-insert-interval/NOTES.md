# Thought Process

- keep track of index from given input `intervals`
- all intervals before `newInterval` are non-overlapping with `newInterval`
  - if `intervals[i][1] < newInterval[0]`, then `intervals[i]` is non-overlapping with `newInterval`
    - add `intervals[i]` to the result
- find all overlapping intervals with `newInterval`
  - if `intervals[i][0] <= newInterval[1]`, then `intervals[i]` is overlapping with `newInterval`
    - `newInterval[0] = min(newInterval[0], intervals[i][0])`
    - `newInterval[1] = max(newInterval[1], intervals[i][1])`
- push `newInterval` to the result
- all intervals after `newInterval` are non-overlapping with `newInterval`
