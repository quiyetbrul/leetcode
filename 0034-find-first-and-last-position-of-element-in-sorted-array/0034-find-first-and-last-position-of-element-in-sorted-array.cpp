class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        if (n == 0)
            return {-1, -1};

        int left = findIndex(nums, target, true);
        int right = findIndex(nums, target, false);

        return {left, right};
    }

private:
    int findIndex(vector<int>& nums, int target, bool isLeft) {
        int left = 0;
        int right = nums.size() - 1;
        int index = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                index = mid;
                if (isLeft)
                    right = mid - 1;
                else
                    left = mid + 1;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return index;
    }
};
