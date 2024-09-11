class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        std::vector<int> result(nums.size(), 0);

        for (int i = nums.size() - 1; i >= 0; i--) {
            result[i] = std::abs(nums[left]) > std::abs(nums[right])
                            ? nums[left] * nums[left++]
                            : nums[right] * nums[right--];
        }

        return result;
    }
};