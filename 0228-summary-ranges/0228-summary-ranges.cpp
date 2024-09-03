class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        std::vector<std::string> results;
        if (nums.empty()) return results;

        int min = nums[0];
        int max = nums[0];

        for (int i = 1; i <= nums.size(); i++) {
            if (i < nums.size() && nums[i] == max + 1) {
                max = nums[i];
            } else {
                if (min == max) {
                    results.push_back(std::to_string(min));
                } else {
                    results.push_back(std::to_string(min) + "->" + std::to_string(max));
                }
                if (i < nums.size()) {
                    min = nums[i];
                    max = nums[i];
                }
            }
        }

        return results;
    }
};