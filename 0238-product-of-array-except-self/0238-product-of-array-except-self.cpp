class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        std::vector<int> results(n, 1);

        int leftProduct = 1;
        int rightProduct = 1;
        int left = 0;
        int right = n - 1;

        while (left < n && right >= 0) {
            results[left] *= leftProduct;
            leftProduct *= nums[left];
            left++;

            results[right] *= rightProduct;
            rightProduct *= nums[right];
            right--;
        }

        return results;
    }
};