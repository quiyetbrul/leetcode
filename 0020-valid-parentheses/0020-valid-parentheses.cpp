class Solution {
public:
    bool isValid(string s) {
        std::stack<char> parentheses;
    
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                parentheses.push(c);
            } else if (parentheses.empty() ||
                       (c == ')' && parentheses.top() != '(') ||
                       (c == '}' && parentheses.top() != '{') ||
                       (c == ']' && parentheses.top() != '[')) {
                return false;
            } else {
                parentheses.pop();
            }
        }

        return parentheses.empty();
    }
};