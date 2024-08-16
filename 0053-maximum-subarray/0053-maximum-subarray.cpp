class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        int max = nums[0];
        if (n == 1) return max;

        int newMax = max;

        for (int i = 1; i < n; i++){
            newMax = std::max(newMax + nums[i], nums[i]);
            if (newMax > max) max = newMax;
        }

        return max;
    }
};