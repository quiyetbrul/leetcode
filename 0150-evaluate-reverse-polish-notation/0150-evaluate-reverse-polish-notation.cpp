class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> s;

        for (const auto& i : tokens) {
            if (i == "+" || i == "-" || i == "*" || i == "/") {
                int num1 = s.top();
                s.pop();
                int num2 = s.top();
                s.pop();

                if (i == "+")
                    s.push(num2 + num1);
                if (i == "-")
                    s.push(num2 - num1);
                if (i == "*")
                    s.push(num2 * num1);
                if (i == "/")
                    s.push(num2 / num1);
            } else
                s.push(std::stoi(i));
        }

        return s.top();
    }
};