class Solution {
public:
    bool divideArray(vector<int>& nums) {
        // std::sort(nums.begin(), nums.end());
        // for (int i = 1; i < nums.size(); i += 2) {
        //     if (nums[i] != nums[i - 1])
        //         return false;
        // }

        // OR without sorting using a map

        std::unordered_map<int, int> mp;
        for (const auto& i : nums) {
            mp[i]++;
        }

        for (const auto& [k, v] : mp) {
            if (v % 2 != 0)
                return false;
        }

        return true;
    }
};