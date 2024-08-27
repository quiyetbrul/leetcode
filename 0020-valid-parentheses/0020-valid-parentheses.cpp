class Solution {
public:
    bool isValid(string str) {
        std::stack<char> s;

        for(const auto& c : str){
            if(c == '(' || c == '{' || c == '[')
                s.push(c);
            else if(s.empty() ||
                   ( c == ')' && s.top() != '(') || 
                    (c == '}' && s.top() != '{') || 
                    (c == ']' && s.top() != '[' )
                    )
                return false;
            else s.pop();
        }

        return true;
    }
};