class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int size = nums.size();
        int prev = 0;

        for (int i = 0; i < size; i++) {
            if (nums[i] == 0)
                continue;

            if (i < size - 1 && nums[i] == nums[i + 1]) {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }

            swap(nums[prev++], nums[i]);
        }

        return nums;
    }
};