# Thought Process

- bst
- use std::map to store start event as key and end event as value

- create an iterator to find the next interval in the map
  - lower_bound returns an it. to the first element whose key is not considered to go before the key
- if next it. doesn't hit end of map and next start is less than param end, return false
- if next it. doesn't hit start of map and prev end is greater than param start, return false
  - std::prev returns an iterator to the previous element of the current iterator
- insert the event into the map and return true
