class Solution {
public:
    int findClosestNumber(std::vector<int>& nums) {
        int closest = nums[0];
        for(const auto& num : nums){
            // Check if the current number is closer to zero than the closest number found so far
            if (std::abs(num) < std::abs(closest) || (std::abs(num) == std::abs(closest) && num > closest)) {
                closest = num;
            }
        }
        return closest;
    }
};