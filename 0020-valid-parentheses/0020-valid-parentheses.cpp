class Solution {
public:
    bool isValid(string s) {
        stack<char> par;
    
        for(int i = 0 ; i<s.size() ; i++)
        {
            if(par.empty()) par.push(s[i]);
            else
            {
                if(par.top() == '(' && s[i] == ')') par.pop();
                else if(par.top() == '{' && s[i] == '}') par.pop();
                else if(par.top() == '[' && s[i] == ']') par.pop(); 
                else par.push(s[i]);
            }
        }

        return par.empty();
    }
};