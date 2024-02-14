class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {       
        std::unordered_map<int, int> m; // key element, value index
        for (int i = 0; i < nums.size(); i++) {
            auto it = m.find(nums[i]);
            if (it != m.end() && i - it->second <= k) return true;
            m[nums[i]] = i;
        }
        return false;
    }
};
