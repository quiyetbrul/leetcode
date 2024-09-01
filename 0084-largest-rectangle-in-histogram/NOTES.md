# Thought Process

use a stack to keep track of the indices of the histogram bars and calculate the maximum rectangle area by iterating through the heights and processing the stack to find the largest possible rectangle at each step. This approach ensures that each bar is processed in constant time, resulting in an overall time complexity of O(n).
