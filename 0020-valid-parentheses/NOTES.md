# Thought Process

- Create a stack
- iterate through the string
  - if character is an open parenthesis, add it to stack
  - else if character is close parenthesis, check the top of stack and see if it's the matching open parenthesis
    - return false if not matching
  - else (the parentheses match), pop the top character
- return stack.empty() (if not empty, it means there's a lingering open parenthesis that doesn't have a match)​
