class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> s(nums.begin(), nums.end());
        return s.size() != nums.size();
    }
};
