#include <vector>
#include <unordered_map>

class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {       
        std::unordered_map<int, int> s; // key element, value index
        for (int i = 0; i < nums.size(); i++) {
            auto it = s.find(nums[i]);
            if (it != s.end() && i - it->second <= k) {
                return true;
            }
            s[nums[i]] = i;
        }
        return false;
    }
};
