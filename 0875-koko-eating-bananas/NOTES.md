# Thought Process

- it's a binary search problem!
- find min and max value needed to eat all bananas
  - min: 1
  - max: max(piles)
- binary search for the minimum speed
  - while min < max
    - mid = (min + max) / 2
    - if kWorks(mid, piles, h)
      - max = mid
    - else
      - min = mid + 1
- kWorks(mid, piles, h)
  - hours = 0
  - for p in piles
    - hours += (p + mid - 1) / mid // ceil division 
  - return hours <= h
