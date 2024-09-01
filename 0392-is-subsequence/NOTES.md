# Thought Process

Since string t is longer than string s, we can iterate through string t.

We keep track of the index of string s outside the loop, this will help us keep track of the current character we are looking for in string t.

We check if the current character is equal to the character at the current index of string s. If it is, we increment the index of string s.

If the index of string s is equal to the length of string s, we return True. Otherwise, we return False. This approach has a time complexity of O(n) where n is the length of string t and a space complexity of O(1).
