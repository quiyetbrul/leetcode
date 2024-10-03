class Solution {
public:
    string clearDigits(string s) {
        std::string result;

        for (const auto& c : s) {
            if (isalpha(c))
                result += c;
            if (!result.empty() && !isalpha(c))
                result.pop_back();
        }

        return result;
    }
};