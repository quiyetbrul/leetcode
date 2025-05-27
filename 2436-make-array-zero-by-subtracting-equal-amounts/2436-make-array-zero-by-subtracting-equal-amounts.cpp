class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        std::unordered_set<int> us(nums.begin(), nums.end());
        us.erase(0);
        return us.size();
    }
};