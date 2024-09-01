# Thought Process

We find the longer string length between the given string inputs. We create a loop until the length of the longer string. We append the characters from the first string if the index is less than the length of the first string. We append the characters from the second string if the index is less than the length of the second string. This way, we merge the strings by adding letters in alternating order starting with the first string. If a string is longer than the other, we append the additional letters onto the end of the merged string.

We return the merged string. The time complexity of this approach is O(n) where n is the length of the longer string. The space complexity is O(n) where n is the length of the longer string.
