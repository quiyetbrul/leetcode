class Solution {
public:
    vector<string> generateParenthesis(int n) {
        if (n == 0)
            return {};
        if (n == 1)
            return {"()"};

        std::vector<string> result;
        std::string s = "";
        backtrack(n, 0, 0, s, result);
        return result;
    }

private:
    void backtrack(int n, int open, int close, std::string s,
                   std::vector<std::string>& result) {
        if (open == close && open + close == n * 2) {
            result.push_back(s);
            return;
        }

        if (open < n)
            backtrack(n, open + 1, close, s + "(", result);

        if (close < open)
            backtrack(n, open, close + 1, s + ")", result);
    }
};