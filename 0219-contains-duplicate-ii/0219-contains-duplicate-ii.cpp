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
        std::unordered_set<int> window;
        for (int i = 0; i < nums.size(); ++i) {
            if (i > k) // If window size exceeds 'k', remove the oldest element from the window
                window.erase(nums[i - k - 1]);
            if (window.find(nums[i]) != window.end()) // Check if the current element already exists in the window
                return true;
            window.insert(nums[i]); // Add the current element to the window
        }
        return false;
    }
};
