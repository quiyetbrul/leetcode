class Solution {
public:
    // bool containsNearbyDuplicate(std::vector<int>& nums, int k) {       
    //     std::unordered_map<int, int> m; // key element, value index
    //     for (int i = 0; i < nums.size(); i++) {
    //         auto it = m.find(nums[i]);
    //         if (it != m.end() && i - it->second <= k) return true;
    //         m[nums[i]] = i;
    //     }
    //     return false;
    // }
    
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        std::unordered_set<int> m;
        for (int i = 0; i < nums.size(); ++i) {
            if (i > k) // If m size exceeds 'k', remove the oldest element from the m
                m.erase(nums[i - k - 1]);
            if (m.find(nums[i]) != m.end()) // Check if the current element already exists in the m
                return true;
            m.insert(nums[i]); // Add the current element to the m
        }
        return false;
    }
};
