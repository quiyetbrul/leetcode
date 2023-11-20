class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> st;
        for(int i = 0; i < tokens.size(); i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                st.pop();
                // switch statements don't work with strings.
                // must be a char or a number
                // hmm BUT str[i] is technically a char...
                if(tokens[i] == "+") {
                    st.push(num2 + num1);
                }
                else if(tokens[i] == "-") {
                    st.push(num2 - num1);
                }
                else if(tokens[i] == "*") {
                    st.push(num2 * num1);
                }
                else if(tokens[i] == "/") {
                    st.push(num2 / num1);
                }
            } else st.push(stoi(tokens[i]));
        }
        return st.top();
    }
};