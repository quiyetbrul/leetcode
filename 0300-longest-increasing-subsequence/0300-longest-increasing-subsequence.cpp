class Solution {
public:
    int lengthOfLIS(std::vector<int>& nums) {
    std::vector<int> dp;
    for (int num : nums) {
        auto it = std::lower_bound(dp.begin(), dp.end(), num);
        if (it == dp.end()) {
            dp.push_back(num);
        } else {
            *it = num;
        }
    }
    return dp.size();
}
};