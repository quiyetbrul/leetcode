# Thought Process

```output
                                ""
                               /
                              "("
                            /     \
                         "(("      "()"
                        /   \      /  \
                    "((("  "(()"  "()"  "()"
                      |     |       |     |
                  "((()"  "(())"   "()"  "()()"
                    |       |        |      \
                  "((())"  "(()()" "(())()" "()()()"
                    |
                  "((()))"

```

The key idea is to build the combinations incrementally, starting with an empty string. At each step, I decide whether to add an opening or a closing parenthesis based on the current state. I keep track of the number of opening and closing parentheses added so far. If the number of opening parentheses is less than `n`, I can add an opening parenthesis. If the number of closing parentheses is less than the number of opening parentheses, I can add a closing parenthesis. I continue this process until I reach a valid combination of `n` opening and `n` closing parentheses. I backtrack and explore other combinations.

## Call Stack

Execution Trace with n = 3

### Initial Call

- `backtrack(n=3, open=0, close=0, s="", result=[])`
- Current string: ""

### First Level of Recursion

- Add an opening parenthesis since open < n.
- Call: `backtrack(n=3, open=1, close=0, s="(", result=[])`
- Current string: "("

### Second Level of Recursion

- Add another opening parenthesis.
- Call: `backtrack(n=3, open=2, close=0, s="((", result=[])`
- Current string: "(("

### Third Level of Recursion

- Add another opening parenthesis.
- Call: `backtrack(n=3, open=3, close=0, s="(((", result=[])`
- Current string: "((("

### Fourth Level of Recursion

- Cannot add another opening parenthesis because open == n.
- Add a closing parenthesis.
- Call: `backtrack(n=3, open=3, close=1, s="((()", result=[])`
- Current string: "((()"

### Fifth Level of Recursion

- Add another closing parenthesis.
- Call: `backtrack(n=3, open=3, close=2, s="((())", result=[])`
- Current string: "((())"

### Sixth Level of Recursion

- Add the final closing parenthesis.
- Call: `backtrack(n=3, open=3, close=3, s="((()))", result=[])`
- Current string: "((()))"
- This is a valid combination, so add "((()))" to result.
- Return to the previous level of recursion.

### Backtrack and Explore Other Combinations

- Backtrack to the previous state where s = "((()".
- Now add another closing parenthesis since close < open.
- Call: `backtrack(n=3, open=2, close=2, s="(())", result=["((()))"])`
- Current string: "(())"

### Continue Recursion

- Follow similar steps as before to add the final combinations
  - `"(()())", "()(())", "()()()", "(())()"`.
