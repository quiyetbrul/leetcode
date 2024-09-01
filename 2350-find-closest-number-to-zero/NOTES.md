# Thought Process

we keep track of the closest number to zero by iterating through the array and updating the closest number to zero whenever we find a number with a smaller absolute value. If we find a number with the same absolute value, we update the closest number to zero if the number is larger than the current closest number to zero. This approach ensures that we find the closest number to zero with the largest value in the array in linear time.
