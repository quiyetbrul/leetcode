class Solution {
public:
    std::string largestNumber(std::vector<int>& nums) {
        std::vector<std::string> strNums;
        for (int num : nums) {
            strNums.push_back(std::to_string(num));
        }

        std::sort(strNums.begin(), strNums.end(), [](const std::string &a, const std::string &b) {
            return a + b > b + a;
        });

        std::string result;
        for (const std::string &str : strNums) {
            result += str;
        }

        // Handle the case where the result is "0" due to leading zeros
        if (result[0] == '0') {
            return "0";
        }

        return result;
    }
};