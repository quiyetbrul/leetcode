# Thought Process

- binary search problem

- ensure nums1 < nums2
  - swap if not by recursion

- iterate while low <= high
  - find partition in nums1 and nums2

  - partition1 represents the number of elements in nums1
  - partition2 represents the number of elements in nums2
  - example:
    - nums1 = [1, 2, 5, 6] // partition between 2 and 5 for first iteration
    - nums2 = [3, 4, 7, 8] // partition between 4 and 7 for first iteration

  - get max valuf or left/right partition of nums1 and nums2
    - left1 = partition1 == 0 ? INT_MIN : nums1[partition1 - 1]
    - right1 = partition1 == len(nums1) ? INT_MAX : nums1[partition1]
    - left2 = partition2 == 0 ? INT_MIN : nums2[partition2 - 1]
    - right2 = partition2 == len(nums2) ? INT_MAX : nums2[partition2]

  - if left1 <= right2 and left2 <= right1
    - if total length of nums1 and nums2 is even
      - return max(left1, left2) + min(right1, right2) / 2.0
    - else
      - return min(right1, right2)
  - else if left1 > right2
    - high = partition1 - 1
  - else
    - low = partition1 + 1

- return -1;
